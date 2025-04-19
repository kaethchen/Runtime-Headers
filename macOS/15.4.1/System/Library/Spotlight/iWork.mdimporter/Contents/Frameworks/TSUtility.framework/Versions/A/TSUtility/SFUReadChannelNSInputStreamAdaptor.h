@class NSString, NSError;
@protocol SFUInputStream, NSStreamDelegate;

@interface SFUReadChannelNSInputStreamAdaptor : NSInputStream <NSStreamDelegate> {
    id<SFUInputStream> _inputStream;
    id<NSStreamDelegate> _delegate;
    _Atomic unsigned long long _status;
    NSError *_streamError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyForKey:(id)a0;
- (long long)read:(char *)a0 maxLength:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (BOOL)getBuffer:(char **)a0 length:(unsigned long long *)a1;
- (BOOL)hasBytesAvailable;
- (void)open;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)scheduleInRunLoop:(id)a0 forMode:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)streamError;
- (unsigned long long)streamStatus;
- (id)initWithSFUInputStream:(id)a0;

@end
