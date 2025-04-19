@class TUIStaticIdentityManager, NSDictionary, TransparencyAuditorReport, NSString, NSError;

@interface TUIReportManager : NSObject {
    NSError *_reportDataError;
}

@property (retain, nonatomic) TransparencyAuditorReport *auditor;
@property (retain, nonatomic) TUIStaticIdentityManager *staticIdentityManager;
@property (readonly, nonatomic) NSDictionary *reportData;
@property (copy, nonatomic) NSString *additionalDetails;

- (void).cxx_destruct;
- (void)sendReport:(id /* block */)a0;
- (id)reportDetails;
- (void)fetchDataWithUUID:(id)a0;
- (id)initWithStaticIdentityManager:(id)a0;

@end
