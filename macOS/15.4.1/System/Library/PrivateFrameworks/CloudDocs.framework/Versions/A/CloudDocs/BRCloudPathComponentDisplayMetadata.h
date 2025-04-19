@class NSURL, NSAttributedString, BRContainer;

@interface BRCloudPathComponentDisplayMetadata : NSObject {
    BRContainer *_container;
}

@property (readonly, nonatomic) id icon;
@property (readonly, copy, nonatomic) NSAttributedString *displayName;
@property (readonly, copy, nonatomic) NSAttributedString *alternateDisplayName;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)copyICloudDriveComponentDisplayMetadata;
+ (id)copyICloudDriveComponentDisplayMetadataForPersona:(id)a0 needsPersonaSwitch:(BOOL)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDisplayName:(id)a0 suffix:(id)a1 url:(id)a2 icon:(id)a3;

@end
