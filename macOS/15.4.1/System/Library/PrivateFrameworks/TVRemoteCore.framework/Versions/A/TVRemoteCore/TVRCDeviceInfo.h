@class NSString;

@interface TVRCDeviceInfo : NSObject

@property (readonly) NSString *mediaRemoteID;
@property (readonly) NSString *airplayID;
@property (readonly) NSString *idsID;

- (id)description;
- (void).cxx_destruct;
- (void)_populateValidIdentifiers:(id)a0;
- (BOOL)containsID:(id)a0;

@end
