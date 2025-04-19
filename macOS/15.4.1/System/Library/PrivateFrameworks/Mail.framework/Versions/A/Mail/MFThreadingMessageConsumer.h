@class MFLibrary, MFMessageCriterion, NSMutableSet, NSString, MCInvocationQueue;
@protocol MFMessageConsumer;

@interface MFThreadingMessageConsumer : NSObject <MFMessageConsumer>

@property (weak, nonatomic) id<MFMessageConsumer> targetConsumer;
@property (retain, nonatomic) MFMessageCriterion *threadScopeCriterion;
@property (weak, nonatomic) MFLibrary *library;
@property (nonatomic) unsigned int loadOptions;
@property (readonly, nonatomic) MCInvocationQueue *callbackQueue;
@property (retain, nonatomic) NSMutableSet *conversationIDs;
@property BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_messagesCompacted:(id)a0;
- (void)finishedSendingMessages;
- (id)initWithTargetConsumer:(id)a0 threadScopeCriterion:(id)a1 library:(id)a2 loadOptions:(unsigned int)a3;
- (void)newMessagesAvailable:(id)a0 secondaryMessages:(id)a1 fromUpdate:(BOOL)a2;

@end
