@class NSString;

@interface PFCloudKitFatalErrorMetric : PFCloudKitUnhandledPartialErrorMetric {
    NSString *_requestClass;
}

- (void)dealloc;
- (id)name;
- (id)payload;
- (id)initWithContainerIdentifier:(id)a0 result:(id)a1;

@end
