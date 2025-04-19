@class NSMutableDictionary, NSString, SFOidParser, NSDate, NSMutableArray;

@interface SFCertificateData_ivars : NSObject {
    NSMutableArray *_labels;
    NSMutableArray *_fields;
    NSMutableArray *_indent;
    unsigned long long _titleIndex;
    unsigned long long _expDateIndex;
    unsigned long long _subjectField;
    unsigned long long _issuerField;
    unsigned long long _numFields;
    BOOL _expired;
    BOOL _isRoot;
    BOOL _isLeaf;
    BOOL _trustChanged;
    struct __SecCertificate { } *_certRef;
    struct cssm_data { unsigned long long Length; char *Data; } _certData;
    long long _clHandle;
    NSMutableArray *_policies;
    NSMutableArray *_policyNames;
    NSMutableArray *_policyValues;
    NSMutableArray *_trustValues;
    unsigned int _trustDomain;
    NSMutableDictionary *_fieldIndexes;
    BOOL _addToFieldIndexes;
    BOOL _isCA;
    unsigned long long _sigAlgIndex;
    unsigned long long _issuerIndex;
    unsigned long long _serialIndex;
    struct __SecTrust { } *_trustRef;
    NSDate *_firstValidDate;
    NSDate *_expirationDate;
    NSString *_statusString;
    int _certStatus;
    BOOL _parsed;
    BOOL _parseFullCert;
    BOOL _hasResponder;
    BOOL _hasCRL;
    SFOidParser *_oidParser;
    unsigned long long _keyAlgId;
    unsigned long long _keySizeInBits;
}

- (void)dealloc;
- (id)oidParser;
- (void)setOidParser:(id)a0;

@end
