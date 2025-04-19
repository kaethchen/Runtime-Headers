@class NSNumber, NSArray, NSDictionary;

@interface SUCoreDDMDeclarationGlobalSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *enableGlobalNotifications;
@property (retain, nonatomic) NSNumber *majorOSDeferralPeriod;
@property (retain, nonatomic) NSNumber *minorOSDeferralPeriod;
@property (retain, nonatomic) NSNumber *systemUpdatesDeferralPeriod;
@property (retain, nonatomic) NSNumber *combinedUpdatesDeferralPeriod;
@property (retain, nonatomic) NSNumber *recommendationCadence;
@property (retain, nonatomic) NSNumber *automaticallyInstallOSUpdates;
@property (retain, nonatomic) NSNumber *automaticallyInstallSystemAndSecurityUpdates;
@property (retain, nonatomic) NSNumber *automaticallyCheck;
@property (retain, nonatomic) NSNumber *automaticallyDownload;
@property (retain, nonatomic) NSNumber *adminInstallRequired;
@property (retain, nonatomic) NSNumber *enableRapidSecurityResponse;
@property (retain, nonatomic) NSNumber *enableRapidSecurityResponseRollback;
@property (retain, nonatomic) NSArray *serializedKeys;
@property (retain, nonatomic) NSNumber *programEnrollment;
@property (retain, nonatomic) NSArray *offerPrograms;
@property (retain, nonatomic) NSDictionary *requireProgram;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDeclarationKeys:(id)a0;
- (BOOL)isValidDeclarationWithReason:(id *)a0;

@end
