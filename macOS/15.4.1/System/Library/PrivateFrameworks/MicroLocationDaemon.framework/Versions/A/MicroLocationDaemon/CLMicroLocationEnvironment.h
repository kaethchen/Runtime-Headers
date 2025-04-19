@interface CLMicroLocationEnvironment : NSObject {
    BOOL _isTestingEnvironment;
}

@property (readonly, nonatomic) BOOL isTestingEnvironment;

+ (id)shared;

- (id)init;
- (void)setIsTestingEnvironment:(BOOL)a0;

@end
