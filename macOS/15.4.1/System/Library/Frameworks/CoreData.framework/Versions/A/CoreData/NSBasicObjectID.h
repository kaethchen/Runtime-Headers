@interface NSBasicObjectID : _NSCoreManagedObjectID {
    int _cd_rc;
    id _referenceData;
}

+ (char *)generatedNameSuffix;

- (void)dealloc;
- (id)initWithObject:(id)a0;
- (id)_referenceData;
- (id)_retainedURIString;

@end
