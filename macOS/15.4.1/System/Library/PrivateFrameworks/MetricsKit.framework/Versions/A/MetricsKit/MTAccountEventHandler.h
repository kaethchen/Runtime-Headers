@protocol MTAccountEventHandlerDelegate;

@interface MTAccountEventHandler : MTStandardEventHandler

@property (weak) id<MTAccountEventHandlerDelegate> delegate;

- (id)eventType;
- (id)type:(id)a0;
- (id)knownFields;
- (id)eventVersion:(id)a0;

@end
