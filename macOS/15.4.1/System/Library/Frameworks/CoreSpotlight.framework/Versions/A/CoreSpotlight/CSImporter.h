@interface CSImporter : CSXPCConnection

+ (id)sharedImporterForUser:(unsigned int)a0;

- (void)_UTITypesByBundleID:(id /* block */)a0;
- (void)_importFilesForBundleId:(id)a0 data:(id)a1 completionHandler:(id /* block */)a2;

@end
