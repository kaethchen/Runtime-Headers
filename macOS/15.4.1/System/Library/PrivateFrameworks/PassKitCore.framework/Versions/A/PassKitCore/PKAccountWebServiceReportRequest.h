@class NSString, NSURL, PKAccountReport;

@interface PKAccountWebServiceReportRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSURL *baseURL;
@property (retain, nonatomic) PKAccountReport *report;
@property (nonatomic) unsigned long long trigger;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)a0;

@end
