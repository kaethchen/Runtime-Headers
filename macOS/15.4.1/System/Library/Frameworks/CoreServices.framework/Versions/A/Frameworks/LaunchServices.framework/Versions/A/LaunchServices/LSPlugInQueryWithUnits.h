@class NSArray, NSUUID;

@interface LSPlugInQueryWithUnits : LSPlugInQuery {
    NSArray *_pluginUnits;
    NSUUID *_dbUUID;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (id)initWithPlugInUnits:(id)a0 forDatabaseWithUUID:(id)a1;

@end
