@class NSSet, NSData, CHSWidgetExtensionProviderOptions;

@interface CHSWidgetExtensionsBox : NSObject <CHSXPCEncodable> {
    NSData *_archivedData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSSet *extensions;
@property (retain, nonatomic) CHSWidgetExtensionProviderOptions *options;
@property (nonatomic) unsigned long long sequenceNumber;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExtensions:(id)a0;
- (id)initWithExtensions:(id)a0 generatedFrom:(id)a1;
- (void)prepareForEncoding;

@end
