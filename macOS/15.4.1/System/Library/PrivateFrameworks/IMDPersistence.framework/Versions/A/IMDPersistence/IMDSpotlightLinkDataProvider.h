@interface IMDSpotlightLinkDataProvider : IMDSpotlightDataProvider

+ (id)attachmentPathsFromMessageRecord:(id)a0;
+ (id)decontainerizedPathString:(id)a0;

- (id)typeIdentifier;
- (id)dataForGUID:(id)a0 error:(id *)a1;

@end
