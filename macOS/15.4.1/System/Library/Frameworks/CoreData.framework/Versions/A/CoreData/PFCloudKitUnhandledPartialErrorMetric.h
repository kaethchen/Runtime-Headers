@class NSNumber, NSString;

@interface PFCloudKitUnhandledPartialErrorMetric : PFCloudKitBaseMetric {
    NSNumber *_errorCode;
    NSString *_errorDomain;
}

- (void)dealloc;
- (id)name;
- (id)payload;
- (id)initWithContainerIdentifier:(id)a0 error:(id)a1;

@end
