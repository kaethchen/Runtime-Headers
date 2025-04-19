@interface CalAttachmentUtils : NSObject

+ (id)attachmentContainerWithBaseURL:(id)a0;
+ (BOOL)attachmentURL:(id)a0 matchesServerURL:(id)a1;
+ (id)_knownTLDForHostname:(id)a0;
+ (id)_stripSubdomain:(id)a0;
+ (id)attachmentContainerForSourceIdentifier:(id)a0 calendarDataContainer:(id)a1;
+ (id)getFileSizeForPath:(id)a0 fileManager:(id)a1 error:(id *)a2;
+ (id)legacyAttachmentContainerWithBaseURL:(id)a0;
+ (id)legacyCalendarDataContainer;
+ (id)localRelativePathForLocalAbsoluteURL:(id)a0 localBaseURL:(id)a1;
+ (id)localURLForAttachmentWithRelativePath:(id)a0 baseURL:(id)a1;
+ (id)resolveSymlinksInURLThatMayNotFullyExist:(id)a0;

@end
