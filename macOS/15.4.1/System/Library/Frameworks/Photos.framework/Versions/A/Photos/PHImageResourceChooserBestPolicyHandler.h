@interface PHImageResourceChooserBestPolicyHandler : PHImageResourceChooserPolicyHandler

+ (BOOL)_imageResourceIsUndecodableBasedOnResourceType:(unsigned int)a0 recipeID:(unsigned int)a1 version:(unsigned int)a2 asset:(id)a3 loggingPrefix:(id)a4;
+ (unsigned long long)qualifyResourceInfo:(id)a0 againstPolicy:(long long)a1 requestInfo:(id)a2 reversed:(BOOL)a3 tooLargeForPolicy:(BOOL *)a4 disqualificationReason:(id *)a5;

@end
