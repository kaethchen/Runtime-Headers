@class NSString, IFPackageController;

@interface IFPackageRequirementsError : NSObject {
    IFPackageController *_packageController;
    id _reference;
    BOOL _shouldContinue;
    NSString *_errorTitle;
    NSString *_errorMessage;
}

- (id)description;
- (BOOL)shouldContinue;
- (id)reference;
- (id)errorMessage;
- (id)errorTitle;
- (id)packageController;

@end
