@class NSArray, NSString;

@interface EWSResolveNamesType : EWSBaseRequestType

@property (copy) NSArray *ParentFolderIds;
@property (copy) NSString *UnresolvedEntry;
@property BOOL ReturnFullContactData;
@property long long SearchScope;

+ (id)definition;

- (id)init;
- (void).cxx_destruct;

@end
