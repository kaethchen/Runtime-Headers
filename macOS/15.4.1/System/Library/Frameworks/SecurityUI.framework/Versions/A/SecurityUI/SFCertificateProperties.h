@class NSArray;

@interface SFCertificateProperties : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSArray *sectionTitles;

- (void).cxx_destruct;
- (id)initWithCertificate:(struct __SecCertificate { } *)a0;
- (void)_setup:(id)a0;
- (id)_copyPropertiesFromCertificate:(struct __SecCertificate { } *)a0;
- (id)_cellInfosForSection:(id)a0;
- (id)_sectionInfoForCertSection:(id)a0 title:(id)a1;
- (id)_sectionsFromProperties:(id)a0;
- (id)_sendablePropertiesFromCertificate:(struct __SecCertificate { } *)a0;
- (id)_sendablePropertiesFromProperties:(id)a0;
- (id)_sendablePropertyFromProperty:(id)a0;

@end
