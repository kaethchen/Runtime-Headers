@class NSString;

@interface IPAGeometryOperator : NSObject <IPAGeometryOperator> {
    NSString *_identifer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)a0;
- (id)transformForGeometry:(id)a0;

@end
