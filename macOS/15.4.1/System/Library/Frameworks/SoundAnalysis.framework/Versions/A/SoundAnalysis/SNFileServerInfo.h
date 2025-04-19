@class NSString;

@interface SNFileServerInfo : NSObject {
    void /* unknown type, empty encoding */ impl;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *idsDeviceID;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;

@end
