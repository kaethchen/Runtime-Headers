@interface NEIKEv2EncryptedFragmentPayload : NEIKEv2EncryptedPayload {
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
}

+ (id)copyTypeDescription;

- (unsigned long long)type;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
