@class NSNumber, NSURL, BRCloudPathComponentDisplayMetadata, NSAttributedString;

@interface NSFileLocationComponent : NSObject {
    NSURL *_url;
    NSFileLocationComponent *_containerComponent;
    NSAttributedString *_iconAsAttributedString;
    NSNumber *_isUbiquityContainer;
    BRCloudPathComponentDisplayMetadata *_iCloudMetadata;
}

+ (id)attributedStringForIcon:(id)a0;
+ (void)flushCaches;
+ (id)leafFileLocationComponentWithURL:(id)a0;

- (id)name;
- (void).cxx_destruct;
- (id)url;
- (id)_initWithURL:(id)a0;
- (id)presentableName;
- (id)_cloudMetadata;
- (BOOL)_isUbiquityContainer;
- (id)containerComponent;
- (id)iconAsAttributedString;

@end
