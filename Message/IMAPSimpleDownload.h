/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import "Message-Structs.h"
#import "IMAPDownload.h"

@class NSError, NSMutableData, NSString;

@interface IMAPSimpleDownload : IMAPDownload {
	NSMutableData* _mdata;
	NSString* _section;
	NSError* _error;
	unsigned _length : 32;
	unsigned _knownLength : 1;
	unsigned _complete : 1;
	NSRange _range;
}
-(id)initWithUid:(unsigned long)uid section:(id)section estimatedLength:(unsigned long)length;
-(id)initWithUid:(unsigned long)uid section:(id)section length:(unsigned long)length;
-(id)initWithUid:(unsigned long)uid section:(id)section range:(NSRange)range;
-(id)section;
// inherited: -(unsigned long)expectedLength;
// inherited: -(unsigned long)bytesFetched;
// inherited: -(void)dealloc;
// inherited: -(void)handleFetchResult:(id)result;
// inherited: -(void)processResults;
// inherited: -(void)addCommandsToPipeline:(id)pipeline withCache:(id)cache;
// inherited: -(BOOL)isComplete;
// inherited: -(id)data;
// inherited: -(id)error;
// inherited: -(void)setError:(id)error;
@end
