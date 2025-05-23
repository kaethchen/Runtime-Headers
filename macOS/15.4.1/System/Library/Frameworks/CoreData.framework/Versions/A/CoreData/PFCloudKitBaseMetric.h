@class NSString, NSDictionary;

@interface PFCloudKitBaseMetric : NSObject <PFCloudKitMetric> {
    NSString *_containerIdentifier;
    NSString *_processName;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSDictionary *payload;

- (void)dealloc;
- (id)description;
- (id)initWithContainerIdentifier:(id)a0;

@end
