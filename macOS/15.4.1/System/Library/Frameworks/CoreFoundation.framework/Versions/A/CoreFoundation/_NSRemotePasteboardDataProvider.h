@class NSUUID, NSString;

@interface _NSRemotePasteboardDataProvider : NSObject <UAPasteboardItemProviding> {
    long long _generation;
    long long _itemIdentifier;
    struct __CFString { } *_flavorName;
}

@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
