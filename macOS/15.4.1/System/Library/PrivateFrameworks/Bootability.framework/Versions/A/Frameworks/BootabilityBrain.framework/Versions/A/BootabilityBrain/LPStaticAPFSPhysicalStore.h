@interface LPStaticAPFSPhysicalStore : LPStaticMedia

+ (id)supportedContentTypes;

- (id)container;
- (int)role;
- (id)parent;

@end
