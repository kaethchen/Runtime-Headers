@class NSString, MPDisplay, WFImage, NSScreen;

@interface WFDisplay : NSObject <NSSecureCoding, WFNaming>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) MPDisplay *display;
@property (readonly, nonatomic) BOOL mainScreenLoaded;
@property (readonly, nonatomic) BOOL builtInScreenLoaded;
@property (readonly, nonatomic) NSString *serializationUUID;
@property (readonly, nonatomic) NSString *UUID;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *deviceName;
@property (readonly, nonatomic) WFImage *image;
@property (readonly, nonatomic) BOOL isMainScreen;
@property (readonly, nonatomic) BOOL isBuiltInScreen;
@property (readonly, nonatomic) NSScreen *screen;
@property (readonly, copy, nonatomic) NSString *wfName;

+ (id)mainDisplay;
+ (id)builtInDisplay;
+ (id)displayForUUID:(id)a0;
+ (id)allConnectedDisplays;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScreen:(id)a0;
- (id)backingScaleFactor;
- (id)initWithDisplay:(id)a0;
- (id)initWithDisplayUUID:(id)a0 deviceName:(id)a1 name:(id)a2;
- (id)initWithDisplayUUID:(id)a0 name:(id)a1;
- (id)initWithDisplayUUID:(id)a0 serializationUUID:(id)a1 localizedName:(id)a2;
- (id)initWithDisplayUUID:(id)a0 serializationUUID:(id)a1 screen:(id)a2 localizedName:(id)a3;

@end
