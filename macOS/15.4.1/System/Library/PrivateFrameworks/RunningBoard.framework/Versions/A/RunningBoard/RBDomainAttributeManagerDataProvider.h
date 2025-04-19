@class NSString, NSDictionary;

@interface RBDomainAttributeManagerDataProvider : NSObject <RBDomainAttributeDataProviding> {
    NSString *_path;
    NSDictionary *_rawTemplates;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)initWithPath:(id)a0;
- (id)validationErrors;
- (id)templatesByDomain;
- (id)validDomains;

@end
