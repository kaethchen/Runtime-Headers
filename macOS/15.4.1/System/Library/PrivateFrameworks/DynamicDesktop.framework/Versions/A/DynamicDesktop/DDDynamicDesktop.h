@interface DDDynamicDesktop : NSObject {
    void /* unknown type, empty encoding */ desktop;
}

@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) BOOL canSelectAppearance;
@property (nonatomic, readonly) struct { unsigned int x0; unsigned int x1; } appearanceIndexes;
@property (nonatomic, readonly) BOOL usesLocationServices;

- (id)init;
- (void).cxx_destruct;
- (id)init:(id)a0;

@end
