@protocol CPLAbstractObject;

@interface CPLPlatformObject : NSObject

@property (readonly, weak, nonatomic) id<CPLAbstractObject> abstractObject;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAbstractObject:(id)a0;

@end
