@class NSString;

@interface _MFPersistedMessageForwardingIterator : NSObject <MFMessageConsumer>

@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
