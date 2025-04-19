@class NSString, NSNumber;

@interface SAUIPhotoPickerRequest : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *directInvocationBundleIdentifier;
@property (copy, nonatomic) NSString *searchQuery;
@property (copy, nonatomic) NSNumber *selectionLimit;

- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
