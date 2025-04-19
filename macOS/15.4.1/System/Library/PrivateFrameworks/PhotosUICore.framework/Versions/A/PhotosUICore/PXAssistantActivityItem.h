@interface PXAssistantActivityItem : PXObservable

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) double progress;

- (id)init;

@end
