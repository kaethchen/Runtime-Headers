@class NSString;

@interface CUFindMyLocateMeDevice : NSObject {
    void /* unknown type, empty encoding */ findMyIdentifier;
    void /* unknown type, empty encoding */ idsID;
    void /* unknown type, empty encoding */ name;
}

@property (nonatomic, readonly) NSString *findMyIdentifier;
@property (nonatomic, readonly) NSString *idsID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isThisDevice;
@property (nonatomic, readonly) NSString *name;

- (id)init;
- (void).cxx_destruct;
- (id)initWithFindMyIdentifier:(id)a0 idsID:(id)a1 isThisDevice:(BOOL)a2 name:(id)a3;

@end
