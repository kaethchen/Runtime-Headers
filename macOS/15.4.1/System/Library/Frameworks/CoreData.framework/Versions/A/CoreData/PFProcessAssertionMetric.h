@class NSString;

@interface PFProcessAssertionMetric : NSObject {
    NSString *_bundleID;
    NSString *_assertionLabel;
}

@property (readonly, nonatomic) NSString *name;

- (void)dealloc;
- (id)description;
- (id)createPayload;
- (id)initWithAssertionLabel:(id)a0;

@end
