@class NSString, NSArray, NSImage;

@interface SMSystem_Client_Windows : SMSystem_Client_Network

@property (retain) NSString *driveLetter;
@property (retain) NSArray *components;
@property (retain) NSImage *volumeIcon;

+ (id)guiInterestedKeys;

- (void).cxx_destruct;
- (long long)defaultUIRank;
- (id)userFromXpcDictionary:(id)a0;

@end
