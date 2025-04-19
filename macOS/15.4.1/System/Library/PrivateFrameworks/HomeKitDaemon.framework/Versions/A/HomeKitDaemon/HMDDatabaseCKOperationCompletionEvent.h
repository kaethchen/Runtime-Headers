@class NSString;

@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent

@property (readonly, copy) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)initWithContainerIdentifier:(id)a0;

@end
