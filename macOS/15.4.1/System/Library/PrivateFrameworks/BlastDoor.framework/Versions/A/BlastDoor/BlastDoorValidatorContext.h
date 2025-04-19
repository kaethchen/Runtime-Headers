@class NSString;

@interface BlastDoorValidatorContext : NSObject {
    void /* unknown type, empty encoding */ validatorContext;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isBusiness;

- (id)init;
- (id)initForBusinessChat:(BOOL)a0;

@end
