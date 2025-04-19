@class NSString, NSNumber;

@interface IFFailureRequest : NSObject

@property (retain) NSString *elementClassName;
@property (retain) NSNumber *crashAtProgress;

- (void)dealloc;
- (id)description;
- (id)initWithElementName:(id)a0 crashAtProgress:(id)a1;

@end
