@class NSMapTable;

@interface PXGSpriteTextureStore : NSObject {
    NSMapTable *_textureByKeyByPresentationType[3];
}

- (id)init;
- (void).cxx_destruct;
- (id)textureForKey:(id)a0 presentationType:(unsigned char)a1;
- (void)enumerateTexturesWithHandler:(id /* block */)a0;
- (void)removeAllTexturesForPresentationType:(unsigned char)a0;
- (void)storeTexture:(id)a0 forKey:(id)a1 presentationType:(unsigned char)a2;
- (id)storedTextureForTexture:(id)a0 key:(id)a1 presentationType:(unsigned char)a2 policy:(unsigned char)a3;

@end
