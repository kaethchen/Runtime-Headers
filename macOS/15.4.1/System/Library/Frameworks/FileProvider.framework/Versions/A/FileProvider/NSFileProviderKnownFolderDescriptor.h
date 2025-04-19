@class NSFileProviderKnownFolderLocation, NSURL;

@interface NSFileProviderKnownFolderDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSFileProviderKnownFolderLocation *location;
@property (readonly, nonatomic) NSURL *knownFolder;
@property (readonly, nonatomic) NSURL *logicalLocation;
@property (readonly, nonatomic) unsigned long long detachOptions;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithKnownFolder:(id)a0 logicalLocation:(id)a1;
- (id)initWithKnownFolder:(id)a0 logicalLocation:(id)a1 detachOptions:(unsigned long long)a2;

@end
