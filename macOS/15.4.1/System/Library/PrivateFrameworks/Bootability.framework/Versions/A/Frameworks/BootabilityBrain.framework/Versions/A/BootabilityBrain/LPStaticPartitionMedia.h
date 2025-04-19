@interface LPStaticPartitionMedia : LPStaticMedia

+ (id)supportedContentTypes;
+ (id)contentTypesForPartitionMedia;
+ (id)primaryMedia;

- (id)children;

@end
