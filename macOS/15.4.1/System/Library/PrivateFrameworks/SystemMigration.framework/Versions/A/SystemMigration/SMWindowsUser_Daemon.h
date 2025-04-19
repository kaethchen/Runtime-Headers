@class NSMutableDictionary, NSDictionary, NSData, NSArray, NSNumber, NSString;

@interface SMWindowsUser_Daemon : SMUser_Daemon

@property (retain) NSNumber *cachedHomeDirSize;
@property (retain) NSData *randomPictureData;
@property (retain) NSMutableDictionary *componentDictionary;
@property (retain) NSDictionary *attributes;
@property (retain) NSArray *components;
@property (readonly, retain) NSString *windowsSID;
@property (readonly) BOOL canTransfer;
@property (readonly, retain) NSData *accountPictureData;

+ (id)randomImageData;
+ (id)keyPathsForValuesAffectingAccountPicture;
+ (id)keyPathsForValuesAffectingAccountPictureData;
+ (id)keyPathsForValuesAffectingCanTransfer;
+ (id)keyPathsForValuesAffectingHomeDirSize;
+ (id)keyPathsForValuesAffectingIsAdminUser;
+ (id)keyPathsForValuesAffectingWindowsHomeDirectoryPath;
+ (id)keyPathsForValuesAffectingWindowsSID;
+ (id)validAndUniqueMacShortnameFromShortname:(id)a0;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (Class)clientClass;
- (id)dictionaryRepresentation;
- (BOOL)isAdminUser;
- (id)componentForIdentifier:(id)a0;
- (id)accountPicture;
- (void)addComponentsToDictionary:(id)a0;
- (id)dictionaryRepresentationSanitized:(BOOL)a0;
- (id)homeDirSize;
- (id)sanitizedDictionaryRepresentation;
- (id)windowsHomeDirectoryPath;

@end
