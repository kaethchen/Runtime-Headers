@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {
    OADConnection *mFrom;
    OADConnection *mTo;
}

+ (id)defaultProperties;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)from;
- (id)to;
- (id)initWithDefaults;

@end
