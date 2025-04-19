@interface _NSCommandeeringMap : NSObject

@property id observerID;
@property (copy) id /* block */ handler;

- (void)dealloc;

@end
