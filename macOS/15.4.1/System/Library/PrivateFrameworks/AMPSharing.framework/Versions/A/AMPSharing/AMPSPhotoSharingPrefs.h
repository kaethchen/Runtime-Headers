@class AMPLSharingClient, NSDictionary;

@interface AMPSPhotoSharingPrefs : NSObject

@property (retain, nonatomic) AMPLSharingClient *client;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly, nonatomic) unsigned char sourceID;
@property (readonly, nonatomic) NSDictionary *photoSharingSettings;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)disablePhotoSharingWithReply:(id /* block */)a0;
- (void)enablePhotoSharingWithSourceID:(id)a0 settings:(id)a1 withReply:(id /* block */)a2;
- (void)updatePrefs:(BOOL)a0 sourceID:(id)a1 settings:(id)a2;

@end
