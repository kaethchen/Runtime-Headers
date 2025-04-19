@class NSString;

@interface CPUI_AuthKitAuth : NSObject

@property (retain) NSString *appleID;
@property (retain) NSString *title;
@property (retain) NSString *reason;
@property BOOL classicUserEnrollment;
@property BOOL requireZMAID;
@property BOOL ephemeral;
@property (retain) NSString *personaID;

- (void).cxx_destruct;
- (void)startAuthWithWindow:(id)a0 completion:(id /* block */)a1;
- (void)_startAuthWithWindow:(id)a0 completion:(id /* block */)a1;

@end
