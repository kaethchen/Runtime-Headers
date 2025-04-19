@class NSString;

@interface MRIRNode : NSObject <MRRouteNodeRepresentable>

@property (retain, nonatomic) NSString *avOutputDeviceIdentifier;
@property (retain, nonatomic) NSString *rapportIdentifier;
@property (retain, nonatomic) NSString *idsIdentifier;
@property (nonatomic) BOOL isLocal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeFromOutputDevice:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithAVOutputDeviceID:(id)a0 isLocal:(BOOL)a1;

@end
