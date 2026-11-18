#region Local Var
    var uLocal_0 = 0;
    var uLocal_1 = 0;
    int iLocal_2 = 0;
    int iLocal_3 = 0;
    int iLocal_4 = 0;
    int iLocal_5 = 0;
    int iLocal_6 = 0;
    int iLocal_7 = 0;
    int iLocal_8 = 0;
    int iLocal_9 = 0;
    int iLocal_10 = 0;
    int iLocal_11 = 0;
    var uLocal_12 = 0;
    var uLocal_13 = 0;
    float fLocal_14 = 0f;
    var uLocal_15 = 0;
    var uLocal_16 = 0;
    int iLocal_17 = 0;
    char* sLocal_18 = NULL;
    var uLocal_19 = 0;
    var uLocal_20 = 0;
    var uLocal_21 = 0;
    var uLocal_22 = 0;
    float fLocal_23 = 0f;
    float fLocal_24 = 0f;
    float fLocal_25 = 0f;
    var uLocal_26 = 0;
    var uLocal_27 = 0;
    int iLocal_28 = 0;
    float fLocal_29 = 0f;
    var uLocal_30 = 0;
    var uLocal_31 = 0;
    var uLocal_32 = 0;
    float fLocal_33 = 0f;
    float fLocal_34 = 0f;
    var uLocal_35 = 0;
    var uLocal_36 = 0;
    var uLocal_37 = 0;
    var uLocal_38 = 0;
    var uLocal_39 = 0;
    int iLocal_40 = 0;
    int iLocal_41 = 0;
    int iLocal_42 = 0;
    int iLocal_43 = 0;
    var uLocal_44 = 0;
    var uLocal_45 = 0;
    var uLocal_46 = 0;
    var uLocal_47 = 0;
    var uLocal_48 = 0;
    var uLocal_49 = 0;
    var uLocal_50 = 0;
    var uLocal_51 = 0;
    var uLocal_52 = 0;
    var uLocal_53 = 0;
    var uLocal_54 = 0;
    var uLocal_55 = 0;
    var uLocal_56 = 0;
    var uLocal_57 = 0;
    var uLocal_58 = 0;
    var uLocal_59 = 0;
    var uLocal_60 = 0;
    var uLocal_61 = 10;
    var uLocal_62 = 0;
    var uLocal_63 = 0;
    var uLocal_64 = 0;
    var uLocal_65 = 0;
    var uLocal_66 = 0;
    var uLocal_67 = 0;
    var uLocal_68 = 0;
    var uLocal_69 = 0;
    var uLocal_70 = 0;
    var uLocal_71 = 0;
    var uLocal_72 = 2;
    var uLocal_73 = 0;
    var uLocal_74 = 0;
    var uLocal_75 = 8;
    var uLocal_76 = 0;
    var uLocal_77 = 0;
    var uLocal_78 = 0;
    var uLocal_79 = 0;
    var uLocal_80 = 0;
    var uLocal_81 = 0;
    var uLocal_82 = 0;
    var uLocal_83 = 0;
    var uLocal_84 = 8;
    var uLocal_85 = 0;
    var uLocal_86 = 0;
    var uLocal_87 = 0;
    var uLocal_88 = 0;
    var uLocal_89 = 0;
    var uLocal_90 = 0;
    var uLocal_91 = 0;
    var uLocal_92 = 0;
    var uLocal_93 = 0;
    float fLocal_94 = 0f;
    var uLocal_95 = 0;
    var uLocal_96 = 0;
    float fLocal_97 = 0f;
    float fLocal_98 = 0f;
    float fLocal_99 = 0f;
    float fLocal_100 = 0f;
    float fLocal_101 = 0f;
    var uLocal_102 = 0;
    vector3 vLocal_103 = { 0f, 0f, 0f };
    float fLocal_104 = 0f;
    vector3 vLocal_105 = { 0f, 0f, 0f };
    float fLocal_106 = 0f;
    vector3 vLocal_107 = { 0f, 0f, 0f };
    float fLocal_108 = 0f;
    var uLocal_109 = 0;
    var uLocal_110 = 0;
    var uLocal_111 = 0;
    var uLocal_112 = 0;
    var uLocal_113 = 0;
    var uLocal_114 = 0;
    var uLocal_115 = 0;
    struct<22> Local_116 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    var uLocal_117 = 0;
    int iLocal_118 = 0;
    int iLocal_119 = 0;
    struct<14> Local_120 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
    vector3 vLocal_121[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
    var uLocal_122 = 0;
    int iLocal_123 = 0;
    int iLocal_124 = 0;
    var uLocal_125 = 0;
    var uLocal_126 = 0;
    var uLocal_127 = 0;
    var uLocal_128 = 0;
    var uLocal_129 = 0;
    var uLocal_130 = 0;
    int iLocal_131 = 0;
    int iLocal_132 = 0;
    int iLocal_133 = 0;
    int iLocal_134 = 0;
    int iLocal_135 = 0;
    struct<2> Local_136 = { 0, 0 } ;
    var uLocal_137 = 0;
    var uLocal_138 = 0;
    var uLocal_139 = 0;
    var uLocal_140 = 0;
    var uLocal_141 = 0;
    var uLocal_142 = 0;
    var uLocal_143 = 16;
    var uLocal_144 = 0;
    var uLocal_145 = 0;
    var uLocal_146 = 0;
    var uLocal_147 = 0;
    var uLocal_148 = 0;
    var uLocal_149 = 0;
    var uLocal_150 = 0;
    var uLocal_151 = 0;
    var uLocal_152 = 0;
    var uLocal_153 = 0;
    var uLocal_154 = 0;
    var uLocal_155 = 0;
    var uLocal_156 = 0;
    var uLocal_157 = 0;
    var uLocal_158 = 0;
    var uLocal_159 = 0;
    var uLocal_160 = 0;
    var uLocal_161 = 0;
    var uLocal_162 = 0;
    var uLocal_163 = 0;
    var uLocal_164 = 0;
    var uLocal_165 = 0;
    var uLocal_166 = 0;
    var uLocal_167 = 0;
    var uLocal_168 = 0;
    var uLocal_169 = 0;
    var uLocal_170 = 0;
    var uLocal_171 = 0;
    var uLocal_172 = 0;
    var uLocal_173 = 0;
    var uLocal_174 = 0;
    var uLocal_175 = 0;
    var uLocal_176 = 0;
    var uLocal_177 = 0;
    var uLocal_178 = 0;
    var uLocal_179 = 0;
    var uLocal_180 = 0;
    var uLocal_181 = 0;
    var uLocal_182 = 0;
    var uLocal_183 = 0;
    var uLocal_184 = 0;
    var uLocal_185 = 0;
    var uLocal_186 = 0;
    var uLocal_187 = 0;
    var uLocal_188 = 0;
    var uLocal_189 = 0;
    var uLocal_190 = 0;
    var uLocal_191 = 0;
    var uLocal_192 = 0;
    var uLocal_193 = 0;
    var uLocal_194 = 0;
    var uLocal_195 = 0;
    var uLocal_196 = 0;
    var uLocal_197 = 0;
    var uLocal_198 = 0;
    var uLocal_199 = 0;
    var uLocal_200 = 0;
    var uLocal_201 = 0;
    var uLocal_202 = 0;
    var uLocal_203 = 0;
    var uLocal_204 = 0;
    var uLocal_205 = 0;
    var uLocal_206 = 0;
    var uLocal_207 = 0;
    var uLocal_208 = 0;
    var uLocal_209 = 0;
    var uLocal_210 = 0;
    var uLocal_211 = 0;
    var uLocal_212 = 0;
    var uLocal_213 = 0;
    var uLocal_214 = 0;
    var uLocal_215 = 0;
    var uLocal_216 = 0;
    var uLocal_217 = 0;
    var uLocal_218 = 0;
    var uLocal_219 = 0;
    var uLocal_220 = 0;
    var uLocal_221 = 0;
    var uLocal_222 = 0;
    var uLocal_223 = 0;
    var uLocal_224 = 0;
    var uLocal_225 = 0;
    var uLocal_226 = 0;
    var uLocal_227 = 0;
    var uLocal_228 = 0;
    var uLocal_229 = 0;
    var uLocal_230 = 0;
    var uLocal_231 = 0;
    var uLocal_232 = 0;
    var uLocal_233 = 0;
    var uLocal_234 = 0;
    var uLocal_235 = 0;
    var uLocal_236 = 0;
    var uLocal_237 = 0;
    var uLocal_238 = 0;
    var uLocal_239 = 0;
    var uLocal_240 = 0;
    var uLocal_241 = 0;
    var uLocal_242 = 0;
    var uLocal_243 = 0;
    var uLocal_244 = 0;
    var uLocal_245 = 0;
    var uLocal_246 = 0;
    var uLocal_247 = 0;
    var uLocal_248 = 0;
    var uLocal_249 = 0;
    var uLocal_250 = 0;
    var uLocal_251 = 0;
    var uLocal_252 = 0;
    var uLocal_253 = 0;
    var uLocal_254 = 0;
    var uLocal_255 = 0;
    var uLocal_256 = 0;
    var uLocal_257 = 0;
    var uLocal_258 = 0;
    var uLocal_259 = 0;
    var uLocal_260 = 0;
    var uLocal_261 = 0;
    var uLocal_262 = 0;
    var uLocal_263 = 0;
    var uLocal_264 = 0;
    var uLocal_265 = 0;
    var uLocal_266 = 0;
    var uLocal_267 = 0;
    var uLocal_268 = 0;
    var uLocal_269 = 0;
    var uLocal_270 = 0;
    var uLocal_271 = 0;
    var uLocal_272 = 0;
    var uLocal_273 = 0;
    var uLocal_274 = 0;
    var uLocal_275 = 0;
    var uLocal_276 = 0;
    var uLocal_277 = 0;
    var uLocal_278 = 0;
    var uLocal_279 = 0;
    var uLocal_280 = 0;
    var uLocal_281 = 0;
    var uLocal_282 = 0;
    var uLocal_283 = 0;
    var uLocal_284 = 0;
    var uLocal_285 = 0;
    var uLocal_286 = 0;
    var uLocal_287 = 0;
    var uLocal_288 = 0;
    var uLocal_289 = 0;
    var uLocal_290 = 0;
    var uLocal_291 = 0;
    var uLocal_292 = 0;
    var uLocal_293 = 0;
    var uLocal_294 = 0;
    var uLocal_295 = 0;
    var uLocal_296 = 0;
    var uLocal_297 = 0;
    var uLocal_298 = 0;
    var uLocal_299 = 0;
    var uLocal_300 = 0;
    var uLocal_301 = 0;
    var uLocal_302 = 0;
    var uLocal_303 = 0;
    var uLocal_304 = 0;
    var uLocal_305 = 0;
    var uLocal_306 = 0;
    var uLocal_307 = 0;
    char* sLocal_308 = NULL;
    struct<21> Local_309 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
    iLocal_2 = 1;
    iLocal_3 = 134;
    iLocal_4 = 134;
    iLocal_5 = 1;
    iLocal_6 = 1;
    iLocal_7 = 1;
    iLocal_8 = 134;
    iLocal_9 = 1;
    iLocal_10 = 12;
    iLocal_11 = 12;
    fLocal_14 = 0,001f;
    iLocal_17 = -1;
    sLocal_18 = "NULL";
    fLocal_23 = 80f;
    fLocal_24 = 140f;
    fLocal_25 = 180f;
    iLocal_28 = 3;
    fLocal_29 = 0f;
    fLocal_33 = -0,0375f;
    fLocal_34 = 0,17f;
    iLocal_40 = 1;
    iLocal_41 = 65;
    iLocal_42 = 49;
    iLocal_43 = 64;
    fLocal_94 = ((0,05f + 0,275f) - 0,01f);
    fLocal_97 = -0,05f;
    fLocal_98 = 0,92f;
    fLocal_99 = 1,94f;
    fLocal_100 = 2,99f;
    fLocal_101 = 3,7f;
    vLocal_103 = { -0,4f, 0,96f, 0,85f };
    fLocal_104 = 0,95f;
    vLocal_105 = { 0f, 2f, 2,5f };
    fLocal_106 = 1,75f;
    vLocal_107 = { 0f, 0f, 120f };
    fLocal_108 = 35,5f;
    func_358(ScriptParam_309);
    while (true)
    {
        func_357();
        if (func_347() || !func_346(unk_0x3D35F9864E4640B1(), 0, 1))
        {
            func_344();
        }
        switch (func_343(unk_0x43B24C247F35B6BC()))
        {
            case 0:
                if (func_342() == 2)
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 2;
                }
                else if (func_342() == 6)
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 5;
                }
                break;
            
            case 2:
                if (func_342() == 2)
                {
                    func_335();
                    func_49();
                }
                else if (func_342() == 6)
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 5;
                }
                if (((func_46(unk_0x3D35F9864E4640B1(), 1) || func_43(unk_0x3D35F9864E4640B1())) || unk_0x2A3398C6222EB190(iLocal_124, 8)) || unk_0x2A3398C6222EB190(iLocal_124, 16))
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 6;
                }
                break;
            
            case 5:
                func_42(&(Local_116.f_19));
                if (func_41(&(Local_116.f_19)))
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 6;
                }
                break;
            
            case 3:
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_1 = 6;
            
            case 6:
                func_344();
                break;
        }
        if (unk_0xEF0CB8FF125B9F9C())
        {
            switch (func_342())
            {
                case 0:
                    func_40(&(Local_116.f_17), 0, 0);
                    Local_116.f_1 = 2;
                    break;
                
                case 2:
                    func_36();
                    func_34();
                    func_3();
                    if (func_1())
                    {
                        Local_116.f_1 = 6;
                    }
                    break;
                
                case 6:
                    break;
                }
        }
    }
}

int func_1()
{
    if (func_2())
    {
        return 1;
    }
    return 0;
}

bool func_2()
{
    return unk_0x2A3398C6222EB190(Local_116, 6);
}

void func_3()
{
    if (unk_0xEF0CB8FF125B9F9C())
    {
        switch (Local_116.f_2)
        {
            case 0:
                if (!unk_0x2A3398C6222EB190(Local_116, 10))
                {
                    if (func_33(&(Local_116.f_17), 300000, 0))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 10);
                    }
                }
                if (!unk_0x2A3398C6222EB190(Local_116, 10))
                {
                    if (unk_0x2A3398C6222EB190(Local_116, 0))
                    {
                        Local_116.f_5 = func_32();
                        Local_116.f_2 = 1;
                        Local_116.f_4 = 0;
                    }
                }
                break;
            
            case 1:
                if (func_6())
                {
                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 3);
                    unk_0xD804ACF2A7171150(&Local_116, 13);
                    func_40(&(Local_116.f_21), 0, 0);
                    Local_116.f_2 = 2;
                }
                break;
            
            case 2:
                if (unk_0x2A3398C6222EB190(Local_116, 4))
                {
                    func_4(Local_116.f_5);
                    Local_116.f_2 = 7;
                }
                break;
            
            case 7:
                func_4(Local_116.f_5);
                break;
            }
    }
}

void func_4(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            func_5(&(Local_116.f_9[0]));
            func_5(&(Local_116.f_12[0]));
            break;
    }
}

void func_5(var uParam0)
{
    var uVar0;
    
    if (unk_0xAA55DF0CB38F413B(*uParam0))
    {
        uVar0 = unk_0xC42CA935BE72299D(*uParam0);
        unk_0x3D93C0CB2ED2E7DC(&uVar0);
    }
}

int func_6()
{
    if (Local_116.f_5 == 0)
    {
        if (!unk_0x2A3398C6222EB190(Local_116, 1))
        {
            iLocal_132 = 0;
            iLocal_133 = unk_0x3AF262D7332EEDF5(0, 5);
            iLocal_119 = 0;
            Local_116.f_3 = -1;
            Local_116.f_4 = 0;
            unk_0xCD7E92DE2BFA0B0D(&Local_116, 1);
        }
        if (!unk_0x2A3398C6222EB190(Local_116, 2))
        {
            if (func_31())
            {
                unk_0xCD7E92DE2BFA0B0D(&Local_116, 2);
            }
        }
        else if (func_7())
        {
            return 1;
        }
    }
    return 0;
}

int func_7()
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    float fVar3;
    
    iVar0 = func_30();
    iVar1 = func_29();
    if (!unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
    {
        if (Local_116.f_15 == 0)
        {
            unk_0x79C80114C0FC1BE7(1);
            Local_116.f_15 = 1;
        }
        if (!unk_0x2A3398C6222EB190(Local_116, 13))
        {
            if (unk_0x9447D7F8254F01B6(1))
            {
                if (unk_0x163F08900ED3E103(1))
                {
                    if (func_28(1, 1, 1))
                    {
                        if (func_22(1, 1, 1))
                        {
                            unk_0xCD7E92DE2BFA0B0D(&Local_116, 13);
                        }
                    }
                }
            }
        }
        if (unk_0x2A3398C6222EB190(Local_116, 13))
        {
            if (func_21(iVar1))
            {
                if (func_21(iVar0))
                {
                    if (func_12(&vVar2, &fVar3))
                    {
                        if (func_11(&(Local_116.f_12[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
                        {
                            unk_0x87A7451620C12125(unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), 1);
                            if (unk_0x496D18970B708258("Not_Allow_As_Saved_Veh", 3))
                            {
                                unk_0x2EDC8603BB24D464(unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
                            }
                            Local_116.f_15 = 1;
                        }
                    }
                }
            }
        }
    }
    if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
    {
        if (!unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
        {
            if (Local_116.f_16 == 0)
            {
                unk_0x8A4541F891BF3B2B(1);
                Local_116.f_16 = 1;
            }
            if (unk_0x163F08900ED3E103(1))
            {
                if (func_21(iVar0))
                {
                    if (func_9(Local_116.f_12[0]))
                    {
                        if (unk_0xA02DD6B5C8C02298(Local_116.f_12[0]))
                        {
                            if (func_8(&(Local_116.f_9[0]), Local_116.f_12[0], 26, iVar0, -1, 1, 1, 1))
                            {
                                unk_0x87A7451620C12125(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1);
                                unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1, 0);
                                unk_0xEB9B39274C401888(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1);
                                unk_0x7F53E53C6F32D196(unk_0xECB7D3275586261E(Local_116.f_9[0]), Global_1574737);
                                unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1, 0);
                                unk_0x990879ED64ED4138(unk_0xECB7D3275586261E(Local_116.f_9[0]), round((200f * Global_262145.f_153)));
                                Local_116.f_16 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    if (!unk_0xAA55DF0CB38F413B(Local_116.f_9[0]) || !unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
    {
        return 0;
    }
    return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
    if (!unk_0x163F08900ED3E103(1))
    {
        return 0;
    }
    if (!unk_0x69DA17666D6E3F5A(uParam1))
    {
        return 0;
    }
    if (!unk_0x432757A9E7AAFA96(unk_0xD7E2A160FD5DEEE1(uParam1), 0))
    {
        return 0;
    }
    *uParam0 = unk_0xC191BE4D610C22BA(unk_0x4E2448BB7576232A(unk_0xD7E2A160FD5DEEE1(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
    if (unk_0x69DA17666D6E3F5A(*uParam0))
    {
        unk_0x583AB626B1CF33F0(unk_0xECB7D3275586261E(*uParam0), iParam7);
        if (unk_0xAB304D33A5075BCC(unk_0xECB7D3275586261E(*uParam0)))
        {
            if (bParam5)
            {
                unk_0x84143EEA447C3060(*uParam0, 1);
            }
        }
        return 1;
    }
    return 0;
}

int func_9(var uParam0)
{
    if (unk_0x69DA17666D6E3F5A(uParam0))
    {
        return !func_10(unk_0xD7E2A160FD5DEEE1(uParam0));
    }
    return 0;
}

int func_10(int iParam0)
{
    if (unk_0x76B3C79DE564AFC6(iParam0))
    {
        if (unk_0x7A6C051038031EFA(iParam0, 0))
        {
            return 1;
        }
        else if (!unk_0x432757A9E7AAFA96(iParam0, 0))
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
    int iVar0;
    float fVar1;
    
    if (!unk_0x9447D7F8254F01B6(1))
    {
        return 0;
    }
    fVar1 = 1,5f;
    if (iParam1 == -32878452)
    {
        fVar1 = 20f;
    }
    if (bParam9)
    {
        unk_0xE882E0C18562237F(vParam2, fVar1, 0, 0, 0, 0, 0, 0);
    }
    iVar0 = unk_0x5129A9193468FF77(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
    *uParam0 = unk_0x23812D401DEBDCBC(iVar0);
    Global_2501777.f_5805 = iVar0;
    if (unk_0x69DA17666D6E3F5A(*uParam0))
    {
        if (bParam13)
        {
            unk_0x39F4D36D9852AC7E(iVar0, 1);
        }
        unk_0x583AB626B1CF33F0(iVar0, iParam8);
        if (unk_0xAB304D33A5075BCC(iVar0))
        {
            if (bParam6)
            {
                unk_0x84143EEA447C3060(*uParam0, 1);
            }
            else
            {
                unk_0x84143EEA447C3060(*uParam0, 0);
            }
            if (bParam11)
            {
                unk_0xB416BAE05AA22BA6(*uParam0, unk_0x3D35F9864E4640B1(), 1);
            }
        }
        unk_0x5028E664ECBD1407(iVar0, bParam7);
        unk_0xD19E428259B86D65(iVar0, 1);
        if (bParam10)
        {
            unk_0x1F9198D3132F6E4C(iVar0);
            unk_0x4E546CD1861E7F46(iVar0, 5, 5, 1f);
        }
        return 1;
    }
    return 0;
}

int func_12(var uParam0, var uParam1)
{
    vector3 vVar0;
    vector3 vVar1;
    vector3 vVar2;
    float fVar3;
    
    if (!func_20(*uParam0, 0f, 0f, 0f, 0))
    {
        return 1;
    }
    switch (iLocal_133)
    {
        case 0:
            if (unk_0x2A3398C6222EB190(Local_116.f_4, iLocal_133))
            {
                vVar0 = { -1232,842f, -1095,003f, 2,2331f };
                vVar1 = { -1226,248f, -1089,819f, 10,1513f };
                vVar2 = { func_19(0, 0) };
                fVar3 = 19,7853f;
            }
            break;
        
        case 1:
            if (unk_0x2A3398C6222EB190(Local_116.f_4, iLocal_133))
            {
                vVar0 = { -622,0966f, 250,3288f, 75,7075f };
                vVar1 = { -614,8635f, 255,2288f, 88,7755f };
                vVar2 = { func_19(0, 1) };
                fVar3 = 266,4686f;
            }
            break;
        
        case 2:
            if (unk_0x2A3398C6222EB190(Local_116.f_4, iLocal_133))
            {
                vVar0 = { 794,4784f, -2034,339f, 25,2469f };
                vVar1 = { 798,8026f, -2026,004f, 33,2793f };
                vVar2 = { func_19(0, 2) };
                fVar3 = 355,9428f;
            }
            break;
        
        case 3:
            if (unk_0x2A3398C6222EB190(Local_116.f_4, iLocal_133))
            {
                vVar0 = { -1623,919f, 1249,831f, 135,2495f };
                vVar1 = { -1621,554f, 1257,98f, 145,2376f };
                vVar2 = { func_19(0, 3) };
                fVar3 = 353,7463f;
            }
            break;
        
        case 4:
            if (unk_0x2A3398C6222EB190(Local_116.f_4, iLocal_133))
            {
                vVar0 = { 1118,077f, 1875,035f, 60,3776f };
                vVar1 = { 1127,638f, 1883,083f, 70,1053f };
                vVar2 = { func_19(0, 4) };
                fVar3 = 201,3967f;
            }
            break;
    }
    if (iLocal_133 < 5)
    {
        if (!func_20(vVar0, 0f, 0f, 0f, 0))
        {
            if (Local_116.f_3 == -1)
            {
                Local_116.f_3 = unk_0x7177ACAFACB0701C(vVar0, vVar1);
            }
            else if (unk_0xCFAEF2ECC4A6FB12(Local_116.f_3))
            {
                if (unk_0xB9C10CA0C0562C1B(Local_116.f_3))
                {
                    if (!unk_0x259FA5215BE5B391(Local_116.f_3))
                    {
                        if (!func_13(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
                        {
                            *uParam0 = { vVar2 };
                            *uParam1 = fVar3;
                            unk_0x297A5D086880A479(Local_116.f_3);
                            return 1;
                        }
                        else
                        {
                            iLocal_133++;
                            unk_0x297A5D086880A479(Local_116.f_3);
                            Local_116.f_3 = -1;
                        }
                    }
                    else
                    {
                        iLocal_133++;
                        unk_0x297A5D086880A479(Local_116.f_3);
                        Local_116.f_3 = -1;
                    }
                }
            }
        }
        else
        {
            iLocal_133++;
        }
    }
    else
    {
        iLocal_133 = 0;
    }
    return 0;
}

int func_13(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
    int iVar0;
    int iVar1;
    float fVar2;
    
    if (iParam2 && !bParam5)
    {
        if (func_346(unk_0x3D35F9864E4640B1(), 1, 1))
        {
            if (!unk_0x5114FCEE2A997B95())
            {
                fVar2 = fParam4;
                if (fParam7 > 0f)
                {
                    fVar2 = fParam7;
                }
                if (unk_0x1410333E912D4EC6(func_18(unk_0x3D35F9864E4640B1()), vParam0, 1) <= (fVar2 + fParam1))
                {
                    if (unk_0xAD2B8127B12C130D(vParam0, fParam1))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    iVar0 = 0;
    while (iVar0 < 32)
    {
        iVar1 = iVar0;
        if (func_346(iVar1, 1, 1))
        {
            if (!func_15(iVar1, 0) && unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iVar1))
            {
                if (iParam2 == 1 || (iParam2 == 0 && iVar1 != unk_0x3D35F9864E4640B1()))
                {
                    if ((func_14(iVar1) || !bParam8) && !Global_2422142[iVar1 /*399*/].f_268)
                    {
                        fVar2 = fParam4;
                        if (fParam7 > 0f)
                        {
                            if (!unk_0xB5E2A107E006EC7A(iVar1) == -1)
                            {
                                if (unk_0xB5E2A107E006EC7A(iVar1) == unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))
                                {
                                    fVar2 = fParam7;
                                }
                            }
                        }
                        if (!bParam5)
                        {
                            if ((iParam3 || (iParam3 == 0 && unk_0xB5E2A107E006EC7A(iVar1) != unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1()))) || unk_0xB5E2A107E006EC7A(iVar1) == -1)
                            {
                                if (unk_0x1410333E912D4EC6(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
                                {
                                    if (unk_0x7A245394A665CEE0(iVar1, vParam0, fParam1))
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                        else if (unk_0xB5E2A107E006EC7A(iVar1) != iParam6 || unk_0xB5E2A107E006EC7A(iVar1) == -1)
                        {
                            if (unk_0x1410333E912D4EC6(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
                            {
                                if (unk_0x7A245394A665CEE0(iVar1, vParam0, fParam1))
                                {
                                    return 1;
                                }
                            }
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    return 0;
}

int func_14(int iParam0)
{
    if (unk_0xAF559C09CB5F80E7(unk_0xD33F4BC17EB987E5(iParam0)) || Global_2422142[iParam0 /*399*/].f_254)
    {
        return 1;
    }
    return 0;
}

bool func_15(int iParam0, int iParam1)
{
    bool bVar0;
    
    if (iParam0 == unk_0x3D35F9864E4640B1())
    {
        bVar0 = func_16(-1, 0) == 8;
    }
    else
    {
        bVar0 = Global_1593076[iParam0 /*647*/].f_204 == 8;
    }
    if (iParam1 == 1)
    {
        if (unk_0x80BA8E3CC61A8625(iParam0))
        {
            bVar0 = unk_0xB5E2A107E006EC7A(iParam0) == 8;
        }
    }
    return bVar0;
}

int func_16(int iParam0, bool bParam1)
{
    int iVar0;
    int iVar1;
    
    iVar1 = iParam0;
    if (iVar1 == -1)
    {
        iVar1 = func_17();
    }
    if (Global_1312833[iVar1] == 1)
    {
        if (bParam1)
        {
        }
        iVar0 = 8;
    }
    else
    {
        iVar0 = Global_1312729[iVar1];
        if (bParam1)
        {
        }
    }
    return iVar0;
}

int func_17()
{
    return Global_1312735;
}

Vector3 func_18(int iParam0)
{
    return unk_0xF177E0DA126D71C8(unk_0xD33F4BC17EB987E5(iParam0), 0);
}

Vector3 func_19(int iParam0, int iParam1)
{
    vector3 vVar0;
    
    vVar0 = { 0f, 0f, 0f };
    switch (iParam0)
    {
        case 0:
            if (iParam1 == 0)
            {
                vVar0 = { -1228,99f, -1092,231f, 7,0465f };
            }
            else if (iParam1 == 1)
            {
                vVar0 = { -618,6293f, 252,6611f, 80,5897f };
            }
            else if (iParam1 == 2)
            {
                vVar0 = { 796,6768f, -2029,602f, 28,1346f };
            }
            else if (iParam1 == 3)
            {
                vVar0 = { -1622,881f, 1253,516f, 139,6713f };
            }
            else if (iParam1 == 4)
            {
                vVar0 = { 1123,27f, 1878,917f, 65,7957f };
            }
            break;
    }
    return vVar0;
}

bool func_20(vector3 vParam0, vector3 vParam1, bool bParam2)
{
    if (bParam2)
    {
        return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
    }
    return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_21(int iParam0)
{
    if (iParam0 == 0)
    {
        return 1;
    }
    unk_0xBE91026C1FC72180(iParam0);
    return unk_0x772F801619C83779(iParam0);
}

bool func_22(int iParam0, bool bParam1, bool bParam2)
{
    return func_23(0, iParam0, 1, bParam1, bParam2);
}

int func_23(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
    int iVar0;
    int iVar1;
    
    if (!unk_0x2A3398C6222EB190(Global_1366078, 0))
    {
        return 0;
    }
    if ((bParam2 && !bParam3) && iParam1 <= (func_27(iParam0) - func_26(iParam0, 0)))
    {
        return 1;
    }
    else
    {
        if (bParam3)
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_26(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_27(iParam0) - func_25(iParam0));
        }
        else
        {
            if (bParam2)
            {
                iVar0 = (iParam1 - func_26(iParam0, 0));
            }
            else
            {
                iVar0 = iParam1;
            }
            iVar1 = (func_27(iParam0) - func_26(iParam0, 1));
        }
        if (!bParam4 && Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] != 3)
        {
            iVar1 = (iVar1 - func_24(iParam0));
        }
        if (iVar0 < iVar1)
        {
            return 1;
        }
    }
    return 0;
}

int func_24(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            return 10;
            break;
        
        case 1:
            return 10;
            break;
        
        case 2:
            return 10;
            break;
    }
    return 0;
}

int func_25(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            return Global_1366078.f_1;
            break;
        
        case 1:
            return Global_1366078.f_2;
            break;
        
        case 2:
            return Global_1366078.f_3;
            break;
    }
    return 0;
}

int func_26(int iParam0, bool bParam1)
{
    int iVar0;
    
    iVar0 = unk_0x3D35F9864E4640B1();
    switch (iParam0)
    {
        case 0:
            if (!unk_0x93BDC21B9F2C5E43())
            {
                return Global_2422142[iVar0 /*399*/].f_218;
            }
            else
            {
                return unk_0x9609F3F56138CB88(!bParam1, 0);
            }
            break;
        
        case 1:
            if (!unk_0x93BDC21B9F2C5E43())
            {
                return Global_2422142[iVar0 /*399*/].f_219;
            }
            else
            {
                return unk_0x35973152AB031A4F(!bParam1, 0);
            }
            break;
        
        case 2:
            if (!unk_0x93BDC21B9F2C5E43())
            {
                return Global_2422142[iVar0 /*399*/].f_220;
            }
            else
            {
                return unk_0xEC1794D6178F34A3(!bParam1, 0);
            }
            break;
    }
    return 0;
}

int func_27(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            return Global_1366086;
            break;
        
        case 1:
            return Global_1366087;
            break;
        
        case 2:
            return Global_1366088;
            break;
    }
    return 0;
}

bool func_28(int iParam0, bool bParam1, bool bParam2)
{
    return func_23(1, iParam0, 1, bParam1, bParam2);
}

int func_29()
{
    return joaat("cavalcade");
}

int func_30()
{
    return joaat("a_m_y_business_03");
}

int func_31()
{
    int iVar0;
    int iVar1;
    vector3 vVar2;
    vector3 vVar3;
    float fVar4;
    int iVar5;
    
    if (unk_0x2A3398C6222EB190(Local_116, 1))
    {
        if (iLocal_119 >= vLocal_121.x)
        {
            if (iLocal_132 < 5)
            {
                iLocal_132++;
            }
            iLocal_119 = 0;
        }
        if (iLocal_119 == 0)
        {
            unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 1);
        }
        if (iLocal_132 < 5)
        {
            iVar5 = iLocal_119;
            if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar5)))
            {
                iVar0 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar5));
                if (func_346(iVar0, 1, 1))
                {
                    iVar1 = unk_0xD33F4BC17EB987E5(iVar0);
                    if (unk_0x2A3398C6222EB190(iLocal_124, 1))
                    {
                        vVar2 = { func_19(Local_116.f_5, iLocal_132) };
                        vVar3 = { unk_0xF177E0DA126D71C8(iVar1, 0) };
                        fVar4 = unk_0x1410333E912D4EC6(vVar2, vVar3, 1);
                        if (fVar4 < 300f)
                        {
                            unk_0xD804ACF2A7171150(&iLocal_124, 1);
                        }
                    }
                }
            }
            iLocal_119++;
            if (iLocal_119 == vLocal_121.x)
            {
                if (unk_0x2A3398C6222EB190(iLocal_124, 1))
                {
                    unk_0xCD7E92DE2BFA0B0D(&(Local_116.f_4), iLocal_132);
                }
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int func_32()
{
    return 0;
}

int func_33(var uParam0, int iParam1, bool bParam2)
{
    if (iParam1 == -1)
    {
        return 1;
    }
    func_40(uParam0, bParam2, 0);
    if (unk_0x27CA09C6DFAB1E79() && !bParam2)
    {
        if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= iParam1)
        {
            return 1;
        }
    }
    else if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x31CD6E9F83C10233(), *uParam0)) >= iParam1)
    {
        return 1;
    }
    return 0;
}

void func_34()
{
    if (unk_0xEF0CB8FF125B9F9C())
    {
        switch (Local_116.f_6)
        {
            case 0:
                if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]) && unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
                {
                    Local_116.f_6 = 1;
                }
                break;
            
            case 1:
                if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
                {
                    if (!func_35(Local_116.f_9[0]))
                    {
                        if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
                        {
                            if (func_9(Local_116.f_12[0]))
                            {
                                if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0])))
                                {
                                    if (unk_0x2A3398C6222EB190(Local_116, 7))
                                    {
                                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 9);
                                        Local_116.f_6 = 2;
                                    }
                                    else if (unk_0x2A3398C6222EB190(Local_116, 14))
                                    {
                                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 9);
                                        Local_116.f_6 = 2;
                                    }
                                    else if (unk_0x2A3398C6222EB190(Local_116, 19))
                                    {
                                        Local_116.f_6 = 3;
                                    }
                                }
                                else
                                {
                                    Local_116.f_6 = 4;
                                }
                            }
                            else
                            {
                                Local_116.f_6 = 3;
                            }
                        }
                    }
                }
                break;
            
            case 2:
                if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
                {
                    if (!func_35(Local_116.f_9[0]))
                    {
                        if (!unk_0x84432DB7C4069064(unk_0xECB7D3275586261E(Local_116.f_9[0])))
                        {
                            Local_116.f_6 = 4;
                        }
                        else if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
                        {
                            if (!func_9(Local_116.f_12[0]))
                            {
                                Local_116.f_6 = 3;
                            }
                            else if (unk_0x2A3398C6222EB190(Local_116, 19))
                            {
                                Local_116.f_6 = 3;
                            }
                        }
                    }
                }
                break;
            
            case 3:
                if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
                {
                    if (!func_35(Local_116.f_9[0]))
                    {
                        if (!unk_0x90219307C9D2728D(unk_0xECB7D3275586261E(Local_116.f_9[0]), 0))
                        {
                            Local_116.f_6 = 4;
                        }
                    }
                }
                break;
            
            case 4:
                break;
            }
    }
}

int func_35(var uParam0)
{
    if (unk_0x69DA17666D6E3F5A(uParam0))
    {
        return unk_0x8682D8A6269E52C9(unk_0xECB7D3275586261E(uParam0));
    }
    return 1;
}

void func_36()
{
    int iVar0;
    int iVar1;
    int iVar2;
    var uVar3;
    
    if (unk_0xEF0CB8FF125B9F9C())
    {
        if (iLocal_118 >= vLocal_121.x)
        {
            iLocal_118 = 0;
            iLocal_131 = 0;
            unk_0xD804ACF2A7171150(&iLocal_124, 0);
            unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 5);
            unk_0xD804ACF2A7171150(&Local_116, 5);
            unk_0xD804ACF2A7171150(&Local_116, 17);
            unk_0xD804ACF2A7171150(&iLocal_124, 14);
            unk_0xD804ACF2A7171150(&iLocal_124, 19);
            if (!unk_0x2A3398C6222EB190(Local_116, 16))
            {
                if (unk_0x2A3398C6222EB190(Local_116, 18))
                {
                    if (!unk_0x2A3398C6222EB190(Local_116, 4))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 16);
                    }
                }
            }
            if (func_39(&(Local_116.f_21)))
            {
                if (!unk_0x2A3398C6222EB190(Local_116, 12))
                {
                    if (func_33(&(Local_116.f_21), 360000, 0))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 12);
                    }
                    if (!unk_0x2A3398C6222EB190(Local_116, 15))
                    {
                        if (func_33(&(Local_116.f_21), 240000, 0))
                        {
                            unk_0xCD7E92DE2BFA0B0D(&Local_116, 15);
                        }
                    }
                }
                else
                {
                    unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 9);
                }
            }
        }
        iVar0 = iLocal_118;
        if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar0)))
        {
            uVar3 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar0));
            iVar2 = uVar3;
            if (unk_0x2A3398C6222EB190(iLocal_124, 5))
            {
                if (vLocal_121[iVar0 /*3*/].f_2 < 7)
                {
                    unk_0xD804ACF2A7171150(&iLocal_124, 5);
                }
            }
            if (!unk_0x2A3398C6222EB190(Local_116, 0))
            {
                if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 0))
                {
                    iLocal_131++;
                }
            }
            else if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 2))
            {
                if (!unk_0x2A3398C6222EB190(Local_116, 17))
                {
                    if (!unk_0x2A3398C6222EB190(Local_116.f_7, iVar2))
                    {
                        if (vLocal_121[iVar0 /*3*/].f_2 > 4)
                        {
                            unk_0xCD7E92DE2BFA0B0D(&(Local_116.f_7), iVar2);
                            unk_0xCD7E92DE2BFA0B0D(&Local_116, 17);
                        }
                    }
                }
                if (!unk_0x2A3398C6222EB190(Local_116, 5))
                {
                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 5);
                }
                if (!unk_0x2A3398C6222EB190(Local_116, 4))
                {
                    if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 1))
                    {
                        Local_116.f_8 = uVar3;
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 4);
                        unk_0xD804ACF2A7171150(&iLocal_124, 15);
                        unk_0xD804ACF2A7171150(&Local_116, 18);
                    }
                }
                if (!unk_0x2A3398C6222EB190(Local_116, 4))
                {
                    if (!unk_0x2A3398C6222EB190(Local_116, 18))
                    {
                        if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 7))
                        {
                            unk_0xCD7E92DE2BFA0B0D(&Local_116, 18);
                        }
                    }
                }
                if (unk_0x2A3398C6222EB190(iLocal_124, 9))
                {
                    if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 5))
                    {
                        unk_0xD804ACF2A7171150(&iLocal_124, 9);
                    }
                }
                if (!unk_0x2A3398C6222EB190(iLocal_124, 14))
                {
                    if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 6))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 14);
                    }
                }
                if (!unk_0x2A3398C6222EB190(iLocal_124, 20))
                {
                    if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 8))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 20);
                    }
                }
            }
        }
        iVar1 = 0;
        while (iVar1 <= 31)
        {
            if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
            {
                func_38(iVar1);
            }
            iVar1++;
        }
        iLocal_118++;
        if (iLocal_118 >= vLocal_121.x)
        {
            if (!unk_0x2A3398C6222EB190(Local_116, 16))
            {
                if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
                {
                    if (func_35(Local_116.f_9[0]))
                    {
                        if (!unk_0x2A3398C6222EB190(Local_116, 4))
                        {
                            if (unk_0x2A3398C6222EB190(iLocal_124, 15))
                            {
                                if (!func_39(&uLocal_129))
                                {
                                    func_40(&uLocal_129, 0, 0);
                                }
                                else if (func_33(&uLocal_129, 2000, 0))
                                {
                                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 16);
                                }
                            }
                        }
                    }
                }
            }
            unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 0);
            if (!unk_0x2A3398C6222EB190(Local_116, 0))
            {
                if (iLocal_131 >= 1)
                {
                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 0);
                }
            }
            if (!unk_0x2A3398C6222EB190(Local_116, 14))
            {
                if (unk_0x2A3398C6222EB190(iLocal_124, 14))
                {
                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 14);
                }
            }
            if (!unk_0x2A3398C6222EB190(Local_116, 19))
            {
                if (unk_0x2A3398C6222EB190(iLocal_124, 20))
                {
                    unk_0xCD7E92DE2BFA0B0D(&Local_116, 19);
                }
            }
            if (!unk_0x2A3398C6222EB190(Local_116, 6))
            {
                if (unk_0x2A3398C6222EB190(iLocal_124, 5))
                {
                    if (Local_116.f_2 > 1 && Local_116.f_2 <= 7)
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 6);
                    }
                    else if (unk_0x2A3398C6222EB190(Local_116, 10))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 6);
                    }
                }
            }
            if (unk_0x2A3398C6222EB190(Local_116, 17))
            {
                unk_0xD804ACF2A7171150(&Local_116, 17);
                unk_0xD804ACF2A7171150(&Local_116, 15);
                unk_0xD804ACF2A7171150(&Local_116, 12);
                func_37(&(Local_116.f_21));
                func_40(&(Local_116.f_21), 0, 0);
            }
            if (!unk_0x2A3398C6222EB190(Local_116, 11))
            {
                if (unk_0x2A3398C6222EB190(Local_116, 12))
                {
                    if (unk_0x2A3398C6222EB190(iLocal_124, 9))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&Local_116, 11);
                    }
                }
            }
        }
    }
}

void func_37(var uParam0)
{
    uParam0->f_1 = 0;
}

void func_38(int iParam0)
{
    if (unk_0xEF0CB8FF125B9F9C())
    {
        if (!unk_0x2A3398C6222EB190(Local_116, 7))
        {
            if (unk_0x2A3398C6222EB190(vLocal_121[iParam0 /*3*/], 3))
            {
                unk_0xCD7E92DE2BFA0B0D(&Local_116, 7);
            }
        }
    }
}

bool func_39(var uParam0)
{
    return uParam0->f_1;
}

void func_40(var uParam0, bool bParam1, bool bParam2)
{
    if (uParam0->f_1 == 0)
    {
        if (unk_0x27CA09C6DFAB1E79() && !bParam1)
        {
            if (!bParam2)
            {
                *uParam0 = unk_0x898811EA80D35DE2();
            }
            else
            {
                *uParam0 = unk_0x51A193745FDE917D();
            }
        }
        else
        {
            *uParam0 = unk_0x31CD6E9F83C10233();
        }
        uParam0->f_1 = 1;
    }
}

int func_41(var uParam0)
{
    if (uParam0->f_1)
    {
        if (unk_0x0C58CE21DE9AD283(unk_0xBC0BAC39A2995602(unk_0x898811EA80D35DE2(), *uParam0)) >= 1000)
        {
            return 1;
        }
    }
    return 0;
}

void func_42(var uParam0)
{
    if (!uParam0->f_1)
    {
        if (unk_0xEF0CB8FF125B9F9C())
        {
            func_40(uParam0, 0, 0);
        }
    }
}

int func_43(int iParam0)
{
    if (func_45(iParam0))
    {
        if (!func_44(iParam0, 11))
        {
            return 1;
        }
    }
    return 0;
}

bool func_44(int iParam0, int iParam1)
{
    return unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_217, iParam1);
}

int func_45(int iParam0)
{
    if (Global_2422142[iParam0 /*399*/].f_217 == 0)
    {
        return 0;
    }
    return 1;
}

int func_46(int iParam0, bool bParam1)
{
    if (bParam1)
    {
        if (func_47(iParam0))
        {
            return 1;
        }
    }
    if (Global_1593076[iParam0 /*647*/] == -1)
    {
        return 0;
    }
    return 1;
}

bool func_47(int iParam0)
{
    return func_48(iParam0);
}

bool func_48(int iParam0)
{
    return unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_13.f_1, 0);
}

void func_49()
{
    func_326();
    func_323();
    if (unk_0x2A3398C6222EB190(Local_116, 10))
    {
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6)
        {
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
        }
    }
    if (unk_0x2A3398C6222EB190(Local_116, 4))
    {
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 <= 6)
        {
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
        }
    }
    if (unk_0x2A3398C6222EB190(Local_116, 16))
    {
        if (!unk_0x2A3398C6222EB190(Local_116, 4))
        {
            if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 <= 6)
            {
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
                Local_120.f_2 = 1055333657;
                func_321(Local_120, func_322(1));
            }
        }
    }
    if (unk_0x2A3398C6222EB190(Local_116, 11))
    {
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 <= 6)
        {
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
            Local_120.f_2 = 1055333657;
            func_321(Local_120, func_322(1));
        }
    }
    if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 > 0)
    {
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6)
        {
            if ((((func_46(unk_0x3D35F9864E4640B1(), 1) || func_320()) || func_319() > 0) || func_44(unk_0x3D35F9864E4640B1(), 1)) || func_318())
            {
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
            }
        }
    }
    if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 > 0)
    {
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6)
        {
            if (func_316(unk_0x3D35F9864E4640B1()))
            {
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
            }
        }
    }
    switch (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2)
    {
        case 0:
            if (unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 0))
            {
                if (unk_0x2A3398C6222EB190(Local_116, 3))
                {
                    if (!unk_0x2A3398C6222EB190(Local_116, 15))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 2);
                        func_315(11, 1);
                        vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 3;
                    }
                    else
                    {
                        vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
                        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 16);
                    }
                }
            }
            break;
        
        case 3:
            if (func_314(Local_116.f_5))
            {
                func_313(Local_116.f_5);
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 4;
            }
            break;
        
        case 4:
            if (!func_312())
            {
                if (func_202())
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 5;
                    func_200(88, 1);
                    func_199();
                }
                else if (unk_0x2A3398C6222EB190(iLocal_124, 8))
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
                }
            }
            else if (func_190())
            {
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 5;
            }
            else
            {
                if (unk_0x2A3398C6222EB190(iLocal_124, 8))
                {
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
                }
                if (unk_0x2A3398C6222EB190(Local_116, 15))
                {
                    func_177(12, 116);
                    vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 6;
                    unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 16);
                }
            }
            break;
        
        case 5:
            if (Local_116.f_5 == 0)
            {
                func_58();
            }
            break;
        
        case 6:
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/] = 0;
            unk_0xD804ACF2A7171150(&iLocal_124, 3);
            unk_0xD804ACF2A7171150(&iLocal_124, 4);
            iLocal_123 = 0;
            func_177(12, 116);
            if (unk_0xA761A0B6072010C8(Global_1767014))
            {
                unk_0x0C4BDC77192798AE(&Global_1767014);
            }
            func_57(&Local_136);
            func_50();
            func_315(11, 0);
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 7;
            break;
        
        case 7:
            if (Local_116.f_2 == 0 && !unk_0x2A3398C6222EB190(Local_116, 10))
            {
                vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 = 0;
            }
            break;
    }
}

void func_50()
{
    if (!func_56())
    {
        return;
    }
    if (!unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A()) == Global_1312575.f_9)
    {
        return;
    }
    func_51();
}

void func_51()
{
    func_53();
    func_52(0);
}

void func_52(bool bParam0)
{
    bool bVar0;
    
    bVar0 = unk_0x27CA09C6DFAB1E79();
    Global_1312575 = 20;
    StringCopy(&(Global_1312575.f_1), "", 32);
    Global_1312575.f_9 = 0;
    if (bVar0)
    {
        Global_1312575.f_10 = unk_0x898811EA80D35DE2();
        Global_1312575.f_11 = unk_0x898811EA80D35DE2();
    }
    StringCopy(&(Global_1312575.f_12), "", 16);
    StringCopy(&(Global_1312575.f_16), "", 64);
    StringCopy(&(Global_1312575.f_32), "", 64);
    Global_1312575.f_52 = 0;
    Global_1312575.f_53 = 0;
    Global_1312575.f_54 = 0;
    Global_1312575.f_55 = -1;
    Global_1312575.f_56 = 0;
    Global_1312575.f_59 = 0;
    if (bParam0)
    {
        return;
    }
}

void func_53()
{
    if (!func_55())
    {
    }
    if (func_56())
    {
        unk_0x256FC007473C96F4(&(Global_1312575.f_12));
        func_54();
        unk_0xDAB2310BAD5B9F5B();
    }
}

void func_54()
{
    switch (Global_1312575)
    {
        case 20:
            return;
        
        case 0:
            return;
        
        case 1:
            unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
            return;
        
        case 2:
            unk_0x96577CAA1D1E72DB(Global_1312575.f_52);
            unk_0x96577CAA1D1E72DB(Global_1312575.f_53);
            return;
        
        case 3:
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            return;
        
        case 4:
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
            return;
        
        case 5:
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            return;
        
        case 6:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            return;
        
        case 7:
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            return;
        
        case 8:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            return;
        
        case 9:
            unk_0xA9895403BC230880(&(Global_1312575.f_16));
            return;
        
        case 10:
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
            return;
        
        case 12:
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
            return;
        
        case 13:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            unk_0xDBB8FCB00B701798(Global_1312575.f_57);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
            return;
        
        case 11:
            unk_0xA9895403BC230880(&(Global_1312575.f_16));
            return;
        
        case 14:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
            return;
        
        case 15:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0xDBB8FCB00B701798(Global_1312575.f_57);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_32));
            return;
        
        case 17:
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
            return;
        
        case 16:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            return;
        
        case 19:
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_16));
            return;
        
        case 18:
            unk_0x50B3C23D0902259F(&(Global_1312575.f_16));
            unk_0xDBB8FCB00B701798(Global_1312575.f_56);
            unk_0x7C8A7ECFBAD2C8C4(&(Global_1312575.f_48));
            unk_0x50B3C23D0902259F(&(Global_1312575.f_32));
            return;
        
        default:
    }
}

int func_55()
{
    if (!func_56())
    {
        return 0;
    }
    unk_0xDDF591880CC70341(&(Global_1312575.f_12));
    func_54();
    return unk_0xD140B300704DB2C2();
}

int func_56()
{
    if (Global_1312575 == 20)
    {
        return 0;
    }
    return 1;
}

void func_57(int iParam0)
{
    bool bVar0;
    struct<8> Var1;
    
    if (unk_0xA761A0B6072010C8(*iParam0))
    {
        unk_0x0C4BDC77192798AE(iParam0);
        bVar0 = true;
    }
    if (unk_0xA761A0B6072010C8(iParam0->f_1))
    {
        unk_0x0C4BDC77192798AE(&(iParam0->f_1));
        bVar0 = true;
    }
    if (unk_0x76B3C79DE564AFC6(iParam0->f_7))
    {
        if (!unk_0x7A6C051038031EFA(iParam0->f_7, 0))
        {
            if (unk_0x8E124932BCA8337D(iParam0->f_7))
            {
                unk_0xFAE7EEA9EC6C8B59(iParam0->f_7, 0);
            }
        }
        bVar0 = true;
    }
    if (bVar0)
    {
        *iParam0 = { Var1 };
    }
}

void func_58()
{
    var uVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
    {
        if (!func_35(Local_116.f_9[0]))
        {
            if (unk_0xA761A0B6072010C8(Global_1767014))
            {
                if (func_175() || func_174())
                {
                    unk_0x10B7FEC9D017D330(Global_1767014, 0);
                }
                else
                {
                    unk_0x10B7FEC9D017D330(Global_1767014, 4);
                }
            }
            else
            {
                Global_1767014 = unk_0xE80C2D6BF636C6C4(unk_0xECB7D3275586261E(Local_116.f_9[0]));
                unk_0xEB934A06DDA5027D(Global_1767014, 1);
                unk_0x067D86058370B7EB(Global_1767014, 0f);
            }
            if (unk_0xA761A0B6072010C8(Local_136))
            {
                if (func_175() || func_174())
                {
                    unk_0x10B7FEC9D017D330(Local_136, 0);
                }
                else
                {
                    unk_0x10B7FEC9D017D330(Local_136, 4);
                }
                if (!unk_0x2A3398C6222EB190(iLocal_124, 10))
                {
                    unk_0x50B5259DFC71B8EC(Local_136, "FM_GDM_BLP");
                    unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 10);
                }
            }
            if (unk_0xA761A0B6072010C8(Local_136.f_1))
            {
                if (func_175() || func_174())
                {
                    unk_0x10B7FEC9D017D330(Local_136.f_1, 0);
                }
                else
                {
                    unk_0x10B7FEC9D017D330(Local_136.f_1, 4);
                }
                if (!unk_0x2A3398C6222EB190(iLocal_124, 12))
                {
                    unk_0x50B5259DFC71B8EC(Local_136.f_1, "FM_GDM_BLP");
                    unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 12);
                }
            }
            if (!unk_0x2A3398C6222EB190(iLocal_124, 6))
            {
                if (!unk_0x2A3398C6222EB190(Global_2359302, 7) && !func_167(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
                {
                    if (unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
                    {
                        if (!func_175())
                        {
                            func_161("FM_GDM_KIL", 0);
                        }
                        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 6);
                    }
                }
            }
            else if (unk_0x2A3398C6222EB190(Global_2359302, 7))
            {
                func_50();
                unk_0xD804ACF2A7171150(&iLocal_124, 6);
            }
            else if (Global_68165)
            {
                func_50();
                unk_0xD804ACF2A7171150(&iLocal_124, 6);
            }
            else if (func_167(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
            {
                func_50();
                unk_0xD804ACF2A7171150(&iLocal_124, 6);
            }
        }
        else if (unk_0x2A3398C6222EB190(iLocal_124, 6))
        {
            func_50();
            unk_0xD804ACF2A7171150(&iLocal_124, 6);
        }
        if (!unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 1))
        {
            iVar1 = unk_0xB8D036D7DBDC4BAC(Local_116.f_9[0], &uVar0);
            if (iVar1 == unk_0x3D35F9864E4640B1())
            {
                unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 1);
                iVar2 = func_158(func_160(unk_0x3D35F9864E4640B1(), 1), 1);
                if (iVar2 > 100)
                {
                    iVar2 = 100;
                }
                iVar3 = iVar2 * 20;
                iVar3 = round((Global_262145.f_4228 * IntToFloat(iVar3)));
                func_121(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
                if (Global_262145.f_2422 != 0f)
                {
                    iVar4 = round(Global_262145.f_2422);
                }
                else
                {
                    iVar4 = 2000;
                }
                if (Global_262145.f_2418 != 0f)
                {
                    iVar5 = round(Global_262145.f_2418);
                }
                else
                {
                    iVar5 = 8000;
                }
                if (iVar4 >= 100)
                {
                    iVar6 = (iVar4 / 100);
                }
                if (iVar5 >= 100)
                {
                    iVar7 = (iVar5 / 100);
                }
                iVar8 = unk_0x3AF262D7332EEDF5(iVar6, iVar7 + 1) * 100;
                iVar8 = func_120(iVar8, 1);
                if (iVar8 > iVar5)
                {
                    iVar8 = iVar5;
                }
                func_71(&iVar8, 1);
                if (func_70())
                {
                    if (iVar8 > 0)
                    {
                        func_61(-352356931, iVar8, &iVar9, 0, 0, 0);
                        Global_2602788[iVar9 /*80*/].f_8 = -1146479277;
                    }
                }
                else
                {
                    unk_0xE0A4003ABBCA4254(iVar8, -1146479277);
                }
                func_60(5, iVar8);
            }
            else if (iVar1 != func_59())
            {
                if (unk_0x80BA8E3CC61A8625(iVar1))
                {
                    if (!unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 7))
                    {
                        if (!unk_0x532CFF8D6B65E42F(iVar1))
                        {
                            unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 7);
                        }
                    }
                }
            }
        }
    }
}

int func_59()
{
    return -1;
}

void func_60(int iParam0, int iParam1)
{
    if (iParam1 > 0)
    {
        Global_2501777.f_272 = iParam0;
        if (iParam1 > Global_262145.f_5979)
        {
            iParam1 = Global_262145.f_5979;
        }
        Global_2501777.f_273 = iParam1;
        Global_2501777.f_274 = 0;
    }
}

void func_61(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
    int iVar0;
    
    if (!func_70())
    {
        return;
    }
    iVar0 = 1;
    if (bParam4)
    {
        iVar0 = 4;
    }
    else if (bParam3)
    {
        iVar0 = 2;
    }
    else if (bParam5)
    {
        iVar0 = 8;
    }
    switch (iParam0)
    {
        case -1645229221:
        case -585718395:
        case -1359375127:
        case 454359403:
        case -982394051:
        case 1643659499:
        case -2072289654:
        case 650665123:
        case 1654961868:
        case -876847842:
        case 68030260:
        case -2122299283:
        case 366672791:
        case 283351220:
        case 291576838:
        case 1182673174:
        case -516219046:
        case 1036455748:
        case 277665518:
        case 2043854386:
        case 1839532116:
        case 1022400740:
        case 1940862352:
        case -1389227906:
        case 711665950:
        case 1704445500:
        case 1515774909:
        case 1173654533:
        case -899802304:
        case -663944335:
        case 1208553146:
        case -613221010:
        case -671062876:
        case -407201236:
        case -754024203:
        case -1885444887:
        case 1931729587:
        case 1064954035:
        case -180141073:
        case 2131324797:
        case 1612072658:
        case -517447402:
        case 1948102096:
        case 1108628223:
        case -1834046564:
        case -1239008812:
        case -222363842:
        case -1276678868:
        case 1564537328:
        case -96593501:
        case 742499889:
        case 2050093329:
        case -1752488069:
        case 634375935:
        case 1850983186:
        case 763367758:
        case 1941570214:
        case 665109499:
        case -1330755006:
        case 1976384368:
        case 268924934:
        case 1869490922:
        case -336803850:
        case -1412692765:
        case 618167454:
        case 980623936:
        case 437291904:
        case -135813048:
            if (iParam1 > 0)
            {
                func_62(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
            }
            break;
        
        case -31156877:
        case -1027218631:
        case -1398318418:
        case 1652884147:
        case -57868256:
        case -1216489292:
        case -46622315:
        case -352356931:
        case -990286235:
        case 563463121:
        case 1734805203:
        case 941287179:
        case -1186079845:
        case -1985150258:
        case -1127021384:
        case -109201286:
        case 312105838:
        case 1982688246:
        case -661030418:
        case 1301046174:
        case -1586170317:
        case 393059668:
        case 23796958:
        case -1077156170:
        case 1780666425:
        case -2043695058:
        case -1922554349:
        case 1287308202:
        case 691372038:
        case 1480707108:
        case 1512499951:
        case 562283735:
        case -154732333:
        case -1362660491:
        case 645708827:
        case 767907967:
        case -1970151306:
        case 718859568:
        case -1955564771:
        case 892388724:
        case -1426920838:
        case 1349151477:
        case 1620609399:
        case 1961641934:
        case 210955503:
        case -59668082:
        case 1736933716:
        case -1468524125:
        case 111573502:
        case 1525644423:
        case 968073639:
        case 1577781788:
        case -934465332:
        case -1194253122:
        case -212607085:
        case -815546555:
        case 1048226110:
        case 569170531:
        case -856006867:
        case 848090538:
        case -47546905:
        case -293060240:
        case 463142405:
        case 1550217370:
        case -101307780:
            func_62(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
            break;
    }
}

int func_62(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
    bool bVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    bool bVar5;
    
    bVar0 = false;
    if (!func_70())
    {
        bVar0 = true;
    }
    iVar1 = 1;
    if (!bVar0)
    {
        if (!unk_0x47409804829F12E2(func_17()) || unk_0x00A30B9F92946C2D())
        {
            Global_2603325 = 1;
            return 0;
        }
        if (Global_2456267)
        {
            if (iParam3 == 1067618600 || iParam3 == -1303831698)
            {
                Global_2603326 = 1;
                return 0;
            }
        }
    }
    bVar3 = false;
    iVar2 = 0;
    while (iVar2 < 5)
    {
        if (Global_2602788[iVar2 /*80*/].f_2 == 0)
        {
            bVar3 = true;
        }
        iVar2++;
    }
    if (!bVar3)
    {
        return 0;
    }
    *uParam0 = 5;
    iVar4 = 2147483647;
    if ((bVar0 || iVar1) || unk_0xF4CA95098478E685(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
    {
        if ((bVar0 || iVar1) || unk_0x0808743DD170F94B(iVar4))
        {
            *uParam0 = func_69(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
            if (iVar1 && !bVar0)
            {
            }
            if (bVar0)
            {
                if (*uParam0 != -1)
                {
                    Global_2602788[*uParam0 /*80*/].f_69 = 1;
                    Global_2602788[*uParam0 /*80*/].f_73 = 1;
                }
            }
            Global_2603312 = 1;
            return 1;
        }
    }
    else
    {
        if (iParam7 & 2 != 0)
        {
            Global_2603324 = 1;
            Global_2603327 = iParam4;
            Global_2603329 = iParam3;
            Global_2603330 = 1;
            Global_2603328 = iParam5;
        }
        if (iParam7 & 8 != 0)
        {
            Global_2603327 = iParam4;
            Global_2603329 = iParam3;
            Global_2603330 = 1;
            Global_2603328 = iParam5;
        }
        bVar5 = false;
        if (bVar5)
        {
            func_68(1, iParam4);
            Global_2603324 = 0;
        }
        if (iParam7 & 4 != 0)
        {
            func_63(-1, iParam4, iParam6, iParam5, -1);
        }
    }
    return 0;
}

void func_63(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
    switch (iParam1)
    {
        case 1704445500:
            unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_131.f_71), 0);
            break;
    }
    if (iParam0 != -1)
    {
        func_64(iParam0);
    }
}

void func_64(int iParam0)
{
    bool bVar0;
    
    bVar0 = false;
    if (!func_70())
    {
        bVar0 = true;
    }
    if (iParam0 != -1)
    {
        if (func_67(iParam0))
        {
            if (!bVar0)
            {
                unk_0x25AE737F7DFF42F9();
            }
        }
        else if (!bVar0)
        {
            unk_0xC03328D5D07806F1(Global_2602788[iParam0 /*80*/]);
        }
        func_65(&(Global_2602788[iParam0 /*80*/]));
    }
}

void func_65(var uParam0)
{
    *uParam0 = 0;
    *uParam0 = 2147483647;
    uParam0->f_1 = 0;
    uParam0->f_2 = 0;
    uParam0->f_3 = -1593119440;
    uParam0->f_4 = -2085313189;
    uParam0->f_5 = 0;
    uParam0->f_6 = 1227573907;
    uParam0->f_7 = -1161833819;
    uParam0->f_8 = 0;
    uParam0->f_8.f_1 = 0;
    uParam0->f_8.f_2 = 0;
    func_66(&(uParam0->f_8.f_3));
    func_66(&(uParam0->f_8.f_16));
    StringCopy(&(uParam0->f_8.f_29), "", 32);
    StringCopy(&(uParam0->f_8.f_37), "", 24);
    StringCopy(&(uParam0->f_8.f_43), "", 16);
    StringCopy(&(uParam0->f_8.f_47), "", 16);
    uParam0->f_8.f_51 = 0;
    uParam0->f_8.f_52 = 0;
    uParam0->f_8.f_53 = 0;
    uParam0->f_8.f_54 = 0;
    uParam0->f_8.f_55 = 0;
    uParam0->f_8.f_56 = 0;
    uParam0->f_69 = 0;
    uParam0->f_70 = 0;
    uParam0->f_71 = 0;
    uParam0->f_72 = 0;
    uParam0->f_74 = 0;
    uParam0->f_73 = 0;
    uParam0->f_75 = 0;
    uParam0->f_76 = 0;
    uParam0->f_77 = 0;
    uParam0->f_79 = 0;
}

void func_66(var uParam0)
{
    *uParam0 = 0;
    uParam0->f_1 = 0;
    uParam0->f_2 = 0;
    uParam0->f_3 = 0;
    uParam0->f_4 = 0;
    uParam0->f_5 = 0;
    uParam0->f_6 = 0;
    uParam0->f_7 = 0;
    uParam0->f_8 = 0;
    uParam0->f_9 = 0;
    uParam0->f_10 = 0;
    uParam0->f_11 = 0;
    uParam0->f_12 = 0;
}

int func_67(int iParam0)
{
    if (iParam0 >= 0 && iParam0 < 5)
    {
        return Global_2602788[iParam0 /*80*/].f_5 == 1;
    }
    return 0;
}

void func_68(int iParam0, var uParam1)
{
    Global_2457433 = uParam1;
    Global_2457432 = iParam0;
}

int func_69(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, var uParam5, bool bParam6, var uParam7, var uParam8, int iParam9)
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < 5)
    {
        if (Global_2602788[iVar0 /*80*/].f_2 == 0)
        {
            if (!func_70())
            {
                iParam0 = iVar0 + 900;
            }
            Global_2602788[iVar0 /*80*/].f_2 = 1;
            Global_2602788[iVar0 /*80*/].f_1 = uParam5;
            Global_2602788[iVar0 /*80*/].f_3 = uParam1;
            Global_2602788[iVar0 /*80*/].f_4 = uParam2;
            Global_2602788[iVar0 /*80*/].f_7 = uParam3;
            Global_2602788[iVar0 /*80*/].f_5 = 0;
            Global_2602788[iVar0 /*80*/] = iParam0;
            Global_2602788[iVar0 /*80*/].f_6 = iParam4;
            Global_2602788[iVar0 /*80*/].f_72 = uParam8;
            Global_2602788[iVar0 /*80*/].f_71 = uParam7;
            Global_2602788[iVar0 /*80*/].f_74 = iParam9;
            Global_2602788[iVar0 /*80*/].f_73 = 0;
            Global_2602788[iVar0 /*80*/].f_75 = unk_0xA83FFA3FA7711E6D();
            Global_2602788[iVar0 /*80*/].f_79 = 0;
            Global_2603312 = 0;
            if (bParam6)
            {
                Global_2602788[iVar0 /*80*/].f_5 = 1;
            }
            return iVar0;
        }
        iVar0++;
    }
    return -1;
}

int func_70()
{
    if (unk_0x20551D6D924ED04B())
    {
        return 1;
    }
    return 0;
}

void func_71(int iParam0, int iParam1)
{
    int iVar0;
    
    if (*iParam0 > 0)
    {
        if (!func_119())
        {
            if (func_118(0))
            {
                if (!func_114(0))
                {
                    if (unk_0x80BA8E3CC61A8625(func_113()))
                    {
                        if (func_112() == 100)
                        {
                            iVar0 = *iParam0;
                            *iParam0 = 0;
                        }
                        else
                        {
                            iVar0 = ((*iParam0 / 100) * func_112());
                            *iParam0 = (*iParam0 - iVar0);
                        }
                        func_110(&iVar0, 0);
                        if (iParam1 == 1)
                        {
                            func_77("GB_BCUT_TICK1", func_113(), iVar0, 0, 0, 1, 1);
                        }
                        func_76(20);
                        func_72(func_113(), iVar0, 1);
                    }
                }
            }
        }
    }
}

void func_72(int iParam0, int iParam1, int iParam2)
{
    struct<8> Var0;
    
    if (func_346(iParam0, 0, 1))
    {
        Var0 = -1983770473;
        Var0.f_1 = unk_0x3D35F9864E4640B1();
        Var0.f_2 = iParam1;
        Var0.f_4 = iParam2;
        Var0.f_5 = func_75(iParam0);
        func_74(&(Var0.f_6), &(Var0.f_7));
        unk_0xBD257D33BCFA529A(1, &Var0, 8, func_73(iParam0));
    }
}

var func_73(int iParam0)
{
    var uVar0;
    
    unk_0xCD7E92DE2BFA0B0D(&uVar0, iParam0);
    return uVar0;
}

void func_74(var uParam0, var uParam1)
{
    *uParam0 = Global_1639417.f_9;
    *uParam1 = Global_1639417.f_10;
}

var func_75(int iParam0)
{
    return Global_1623799[iParam0 /*488*/].f_430;
}

void func_76(int iParam0)
{
    int iVar0;
    int iVar1;
    
    iVar0 = (iParam0 / 32);
    iVar1 = (iParam0 % 32);
    unk_0xCD7E92DE2BFA0B0D(&(Global_2501777.f_4867.f_7[iVar0]), iVar1);
}

int func_77(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
    int iVar0;
    struct<8> Var1;
    
    iVar0 = -1;
    if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam5)
    {
        if (!bParam4)
        {
            StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
        }
        else
        {
            StringCopy(&Var1, unk_0x06D7899D9C1F422F(iParam1), 64);
        }
        if (unk_0x0BD3CCFB6C6CFA91(&Var1))
        {
        }
        unk_0xC8EBA5D7FC75C1C0(sParam0);
        unk_0xDBB8FCB00B701798(func_84(iParam1, -2, 1, 0));
        unk_0x50B3C23D0902259F(func_82(&Var1));
        if (!iParam3 == 0)
        {
            unk_0xDBB8FCB00B701798(iParam3);
        }
        unk_0x96577CAA1D1E72DB(iParam2);
        iVar0 = unk_0xC59BF654690FB5DC(0, 1);
        func_78(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
    }
    return iVar0;
}

void func_78(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
    int iVar0;
    
    if ((!func_81() || !unk_0xF4F91CD09D59F42E()) || !func_15(unk_0x3D35F9864E4640B1(), 0))
    {
        return;
    }
    iVar0 = func_79(iParam2);
    if (iVar0 >= 0 && iVar0 < 5)
    {
        Global_1775874.f_5[iVar0 /*53*/] = iParam0;
        Global_1775874.f_5[iVar0 /*53*/].f_1 = iParam2;
        StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_8), sParam1, 16);
        Global_1775874.f_5[iVar0 /*53*/].f_2[0] = iParam4;
        Global_1775874.f_5[iVar0 /*53*/].f_2[1] = iParam5;
        Global_1775874.f_5[iVar0 /*53*/].f_2[2] = iParam6;
        Global_1775874.f_5[iVar0 /*53*/].f_7 = iParam7;
        Global_1775874.f_5[iVar0 /*53*/].f_6 = iParam8;
        StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_12), sParam3, 64);
        StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
        StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
        StringCopy(&(Global_1775874.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
    }
}

int func_79(int iParam0)
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= (Global_1775874 - 1))
    {
        if (iParam0 > Global_1775874.f_5[iVar0 /*53*/].f_1)
        {
            func_80(iVar0);
            return iVar0;
        }
        iVar0++;
    }
    Global_1775874++;
    if (Global_1775874 > 5)
    {
        Global_1775874 = 5;
        return Global_1775874;
    }
    return (Global_1775874 - 1);
}

void func_80(int iParam0)
{
    int iVar0;
    
    iVar0 = 4;
    while (iVar0 >= iParam0 + 1)
    {
        Global_1775874.f_5[iVar0 /*53*/] = { Global_1775874.f_5[(iVar0 - 1) /*53*/] };
        iVar0 = (iVar0 + -1);
    }
}

bool func_81()
{
    return unk_0x43456EBBDC27D696(-1762644250);
}

var func_82(char* sParam0)
{
    char cVar0[64];
    
    StringCopy(&cVar0, "<C>", 64);
    StringConCat(&cVar0, sParam0, 64);
    StringConCat(&cVar0, "</C>~s~", 64);
    return func_83(&cVar0);
}

var func_83(char[4] cParam0)
{
    return cParam0;
}

int func_84(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
    int iVar0;
    int iVar1;
    
    if (func_316(iParam0))
    {
        if (bParam2)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    if (iParam1 == -2)
    {
        iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
        if (iVar0 > -1 && iVar0 < 4)
        {
            if (Global_1641087.f_92322[iVar0] != -1)
            {
                iParam1 = iVar0;
            }
        }
    }
    if ((func_316(unk_0x3D35F9864E4640B1()) || (func_109() && func_108())) && !unk_0x2A3398C6222EB190(Global_2501777.f_4545, 31))
    {
        iVar1 = func_107();
        if (unk_0x76B3C79DE564AFC6(iVar1))
        {
            if (unk_0x972B5786EA49FE1A(iVar1))
            {
                if (unk_0x46E9A8D99AF6D7BC(iVar1) != -1)
                {
                    if (func_346(unk_0x46E9A8D99AF6D7BC(iVar1), 0, 1))
                    {
                        if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
                        {
                            if (Global_1641087.f_92322[iParam1] != -1)
                            {
                                return func_105(iParam1, iParam0, 0);
                            }
                            else
                            {
                                return func_92(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
                            }
                        }
                        else
                        {
                            return func_92(iParam0, unk_0x46E9A8D99AF6D7BC(iVar1), iParam1, bParam2, bParam3);
                        }
                    }
                }
            }
            else if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
            {
                if (Global_1641087.f_92322[iParam1] != -1)
                {
                    return func_105(iParam1, iParam0, 0);
                }
                else
                {
                    return func_85(0, -1, 0);
                }
            }
            else
            {
                return func_85(0, -1, 0);
            }
        }
    }
    if ((iParam1 > -1 && unk_0xF4F91CD09D59F42E()) && iParam1 < 4)
    {
        if (Global_1641087.f_92322[iParam1] != -1)
        {
            return func_105(iParam1, iParam0, 0);
        }
        else
        {
            return func_92(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
        }
    }
    return func_92(iParam0, unk_0x3D35F9864E4640B1(), iParam1, bParam2, bParam3);
}

int func_85(bool bParam0, int iParam1, bool bParam2)
{
    return func_86(unk_0x3D35F9864E4640B1(), bParam0, iParam1, bParam2);
}

int func_86(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
    int iVar0;
    
    if (!unk_0x80BA8E3CC61A8625(iParam0))
    {
        return 3;
    }
    iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
    if (bParam1)
    {
        if (iParam2 > -1)
        {
            if (func_91(iVar0, iParam2, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18))
            {
                if (iVar0 == iParam2)
                {
                    return func_90(1);
                }
                else
                {
                    return func_90(0);
                }
            }
            else if (bParam3)
            {
                return 28;
            }
            else if (unk_0x2A3398C6222EB190(Global_1641087.f_4, 20))
            {
                return func_87(iVar0, iParam2, 1);
            }
            else
            {
                return func_87(iVar0, iParam2, 0);
            }
        }
        return 28;
    }
    if (iVar0 == iParam2 || iParam2 == -1)
    {
        return func_90(1);
    }
    return func_90(0);
}

int func_87(int iParam0, int iParam1, bool bParam2)
{
    int iVar0;
    
    iVar0 = func_89(iParam0, iParam1);
    if (func_88(Global_1641087.f_96810))
    {
        if (iVar0 == 1)
        {
            iVar0 = 0;
        }
    }
    if (bParam2)
    {
        switch (iVar0)
        {
            case 0:
                return 28;
            
            case 1:
                return 29;
            
            case 2:
                return 30;
            
            case 3:
                return 31;
            
            case 4:
                return 32;
            
            case 5:
                return 33;
            
            case 6:
                return 34;
            
            case 7:
                return 35;
            
            default:
        }
    }
    else
    {
        switch (iVar0)
        {
            case 0:
                return 28;
            
            case 1:
                return 29;
            
            case 2:
                return 30;
            }
        
        default:
    }
    return 28;
}

int func_88(int iParam0)
{
    int iVar0;
    
    if (iParam0 == 0)
    {
        return 0;
    }
    iVar0 = 0;
    while (iVar0 <= 6)
    {
        if (iParam0 == Global_262145.f_8333[iVar0])
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_89(int iParam0, int iParam1)
{
    int iVar0;
    int iVar1;
    
    iVar0 = 0;
    while (iVar0 < 4)
    {
        if (iVar0 == iParam1)
        {
            return iVar1;
        }
        else if (!iParam0 == iVar0)
        {
            if (!func_91(iParam0, iVar0, 0))
            {
                iVar1++;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_90(bool bParam0)
{
    if (bParam0)
    {
        return 118;
    }
    return 116;
}

int func_91(int iParam0, int iParam1, int iParam2)
{
    if (iParam2 == 1)
    {
        if (iParam0 == iParam1)
        {
            return 1;
        }
        return 0;
    }
    if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
    {
        return 1;
    }
    switch (iParam0)
    {
        case 0:
            switch (iParam1)
            {
                case 0:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 0);
                
                case 1:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 1);
                
                case 2:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 2);
                
                case 3:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 3);
                
                default:
            }
            break;
        
        case 1:
            switch (iParam1)
            {
                case 0:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 4);
                
                case 1:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 5);
                
                case 2:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 6);
                
                case 3:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 7);
                
                default:
            }
            break;
        
        case 2:
            switch (iParam1)
            {
                case 0:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 8);
                
                case 1:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 9);
                
                case 2:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 10);
                
                case 3:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 11);
                
                default:
            }
            break;
        
        case 3:
            switch (iParam1)
            {
                case 0:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 12);
                
                case 1:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 13);
                
                case 2:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 14);
                
                case 3:
                    return unk_0x2A3398C6222EB190(Global_1641087.f_48, 15);
                
                default:
            }
            break;
    }
    return 0;
}

int func_92(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
    int iVar0;
    bool bVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    if (iParam2 == -2)
    {
        iVar0 = unk_0xB5E2A107E006EC7A(iParam0);
    }
    else
    {
        iVar0 = iParam2;
    }
    if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/] == 148)
    {
        bVar1 = true;
    }
    iVar2 = iParam0;
    if (iVar2 > -1)
    {
        if (Global_1593076[iVar2 /*647*/] == 148)
        {
            bVar1 = true;
        }
    }
    if (!bVar1)
    {
        if (iVar0 != -1)
        {
            if (func_101())
            {
                iVar3 = func_97(iParam0);
                if (!iVar3 == -1)
                {
                    return func_95(iVar3);
                }
            }
            if ((func_94(iParam1, iParam0, iVar0, 0) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)) || ((func_91(unk_0xB5E2A107E006EC7A(iParam1), unk_0xB5E2A107E006EC7A(iParam0), 0) && unk_0x2A3398C6222EB190(Global_1641087.f_15, 23)) && !unk_0x2A3398C6222EB190(Global_1641087.f_15, 18)))
            {
                return func_90(1);
            }
            else if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 26))
            {
                return func_93(1);
            }
            else
            {
                return func_86(iParam1, 1, iVar0, bParam4);
            }
        }
        else if ((Global_1574297 || Global_1574288) || Global_1593076[iParam0 /*647*/] == 0)
        {
            if (iParam0 == iParam1 || (Global_1574297 == 1 && Global_1574307 == 0))
            {
                return func_90(1);
            }
            else
            {
                return func_86(iParam1, 1, iVar0, bParam4);
            }
        }
        if (Global_1574292 && Global_1573831.f_14 == iParam0)
        {
            return 28;
        }
    }
    iVar4 = func_97(iParam0);
    if (!iVar4 == -1)
    {
        return func_95(iVar4);
    }
    if (bParam3)
    {
        return 0;
    }
    return 1;
}

int func_93(bool bParam0)
{
    if (bParam0)
    {
        return 119;
    }
    return 116;
}

bool func_94(int iParam0, int iParam1, int iParam2, int iParam3)
{
    if (iParam2 == -2)
    {
        if (iParam3 == 0)
        {
            if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && unk_0xB5E2A107E006EC7A(iParam1) == -1)
            {
                return 0;
            }
        }
        return unk_0xB5E2A107E006EC7A(iParam0) == unk_0xB5E2A107E006EC7A(iParam1);
    }
    else
    {
        if (iParam3 == 0)
        {
            if (unk_0xB5E2A107E006EC7A(iParam0) == -1 && iParam2 == -1)
            {
                return 0;
            }
        }
        return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
    }
    return unk_0xB5E2A107E006EC7A(iParam0) == iParam2;
}

int func_95(int iParam0)
{
    int iVar0;
    
    if (iParam0 > -1)
    {
        iVar0 = func_96(iParam0);
        switch (iVar0)
        {
            case 0:
                return 192;
            
            case 1:
                return 193;
            
            case 2:
                return 194;
            
            case 3:
                return 195;
            
            case 4:
                return 196;
            
            case 5:
                return 197;
            
            case 6:
                return 198;
            
            case 7:
                return 199;
            
            case 8:
                return 200;
            
            case 9:
                return 201;
            
            case 10:
                return 202;
            
            case 11:
                return 203;
            
            case 12:
                return 204;
            
            case 13:
                return 205;
            
            case 14:
                return 206;
            }
        
        default:
    }
    return 1;
}

var func_96(int iParam0)
{
    return Global_2416331.f_1947.f_44[iParam0 /*2*/].f_1;
}

int func_97(int iParam0)
{
    if (!iParam0 == func_59())
    {
        if (func_99(iParam0, 1))
        {
            return Global_2416331.f_1947.f_11[func_98(iParam0)];
        }
    }
    return -1;
}

int func_98(int iParam0)
{
    if (iParam0 != func_59())
    {
        return Global_1623799[iParam0 /*488*/].f_11;
    }
    return func_59();
}

bool func_99(int iParam0, bool bParam1)
{
    if (!bParam1)
    {
        if (func_100(iParam0))
        {
            return 0;
        }
    }
    return Global_1623799[iParam0 /*488*/].f_11 != func_59();
}

int func_100(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (Global_1623799[iParam0 /*488*/].f_11 != func_59())
        {
            return Global_1623799[iParam0 /*488*/].f_11 == iParam0;
        }
    }
    return 0;
}

int func_101()
{
    if ((func_104() || func_103()) || func_102())
    {
        return 1;
    }
    return 0;
}

var func_102()
{
    return Global_2445582.f_14;
}

var func_103()
{
    return Global_2445582.f_13;
}

var func_104()
{
    return Global_2445582.f_12;
}

int func_105(int iParam0, int iParam1, bool bParam2)
{
    int iVar0;
    int iVar1;
    
    if (func_101())
    {
        iVar1 = func_97(iParam1);
        if (!iVar1 == -1)
        {
            return func_95(iVar1);
        }
    }
    if (Global_1641087.f_92322[iParam0] != -1 && Global_1641087.f_92322[iParam0] <= 4)
    {
        if (Global_1641087.f_92322[iParam0] == 0)
        {
            iVar0 = 15;
        }
        else if (Global_1641087.f_92322[iParam0] == 1)
        {
            iVar0 = 18;
        }
        else if (Global_1641087.f_92322[iParam0] == 2)
        {
            iVar0 = 24;
        }
        else if (Global_1641087.f_92322[iParam0] == 4)
        {
            if (unk_0x2A3398C6222EB190(Global_1641087.f_15, 29))
            {
                iVar0 = 21;
            }
            else
            {
                iVar0 = 6;
            }
        }
        else
        {
            iVar0 = Global_1641087.f_92322[iParam0];
        }
    }
    else
    {
        iVar0 = func_86(iParam1, !bParam2, iParam0, 0);
    }
    if (unk_0x2A3398C6222EB190(Global_1641087.f_21, 13))
    {
        iVar0 = func_106(iParam0);
    }
    if (unk_0x2A3398C6222EB190(Global_1641087.f_24, 29))
    {
        iVar0 = 0;
    }
    return iVar0;
}

int func_106(int iParam0)
{
    int iVar0;
    
    switch (iParam0)
    {
        case 0:
            iVar0 = Global_1641087.f_116131;
            break;
        
        case 1:
            iVar0 = Global_1641087.f_116132;
            break;
        
        case 2:
            iVar0 = Global_1641087.f_116133;
            break;
        
        case 3:
            iVar0 = Global_1641087.f_116134;
            break;
    }
    switch (iVar0)
    {
        case 0:
            return 15;
        
        case 1:
            return 21;
        
        case 2:
            return 24;
        
        case 3:
            return 18;
        
        case 4:
            return 6;
        
        case 5:
            return 9;
        
        case 6:
            return 3;
        
        case 7:
            return 1;
        
        case 8:
            return 12;
        
        case 9:
            return 2;
        
        default:
    }
    return 2;
}

var func_107()
{
    return Global_2359302.f_2;
}

bool func_108()
{
    return unk_0x2A3398C6222EB190(Global_2359302, 4);
}

bool func_109()
{
    return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 14);
}

void func_110(int iParam0, bool bParam1)
{
    int iVar0;
    int iVar1;
    
    if (bParam1)
    {
        iVar1 = func_111(1);
    }
    else
    {
        iVar1 = func_111(0);
    }
    iVar0 = ((*iParam0 / 100) * iVar1);
    *iParam0 = (*iParam0 - iVar0);
}

int func_111(bool bParam0)
{
    if (bParam0)
    {
        return round((0,05f * 100f));
    }
    return Global_262145.f_11579;
}

int func_112()
{
    return Global_262145.f_11578;
}

int func_113()
{
    return Global_1623799[unk_0x3D35F9864E4640B1() /*488*/].f_11;
}

bool func_114(bool bParam0)
{
    return func_115(unk_0x3D35F9864E4640B1(), bParam0);
}

int func_115(int iParam0, bool bParam1)
{
    return func_116(iParam0, bParam1, 1);
}

int func_116(int iParam0, bool bParam1, int iParam2)
{
    int iVar0;
    
    if (iParam0 == func_59())
    {
        return 0;
    }
    if (!bParam1)
    {
        if (func_117(iParam0, iParam2))
        {
            return 0;
        }
    }
    iVar0 = Global_1623799[iParam0 /*488*/].f_11;
    if (iVar0 != func_59() && Global_1623799[iVar0 /*488*/].f_11.f_370 == iParam2)
    {
        return 1;
    }
    return 0;
}

int func_117(int iParam0, int iParam1)
{
    if (iParam0 != func_59())
    {
        if (Global_1623799[iParam0 /*488*/].f_11 != func_59())
        {
            if (Global_1623799[iParam0 /*488*/].f_11 == iParam0 && Global_1623799[iParam0 /*488*/].f_11.f_370 == iParam1)
            {
                return 1;
            }
        }
    }
    return 0;
}

bool func_118(bool bParam0)
{
    return func_99(unk_0x3D35F9864E4640B1(), bParam0);
}

bool func_119()
{
    return func_100(unk_0x3D35F9864E4640B1());
}

int func_120(int iParam0, int iParam1)
{
    float fVar0;
    
    switch (iParam1)
    {
        case 0:
            break;
        
        case 1:
            if (iParam0 > 0)
            {
                fVar0 = (to_float(iParam0) * Global_262145);
                iParam0 = round(fVar0);
            }
            break;
        
        default:
            break;
    }
    return iParam0;
}

var func_121(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
    return func_122(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_122(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
    var uVar0;
    
    uVar0 = func_123(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
    return uVar0;
}

int func_123(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
    float fVar0;
    int iVar1;
    int iVar2;
    float fVar3;
    
    if (func_157(unk_0x3D35F9864E4640B1()) || func_156(unk_0x3D35F9864E4640B1()))
    {
        if (Global_262145.f_8836 > 16000)
        {
            iVar2 = 16000;
        }
        else
        {
            iVar2 = Global_262145.f_8836;
        }
    }
    else if (Global_262145.f_6030 > 10000)
    {
        iVar2 = 10000;
    }
    else
    {
        iVar2 = Global_262145.f_6030;
    }
    if (func_155(sParam2))
    {
    }
    if (func_154())
    {
        if (iParam4 < 1)
        {
            iParam4 = 1;
        }
        iVar1 = round((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
        iVar1 = func_152(iVar1);
        fVar3 = (to_float(iVar1) * Global_262145.f_1);
        iVar1 = round(fVar3);
        if (bParam10)
        {
            iVar1 = func_151(&iVar1);
        }
        if (iParam1 == 0)
        {
            switch (iParam0)
            {
                case 2:
                    func_149(0, &iVar1);
                    break;
                
                case 3:
                    func_149(1, &iVar1);
                    break;
                
                case 1:
                    func_146(&iVar1);
                    break;
                }
        }
        if (iVar1 > Global_1788555)
        {
            return 0;
        }
        if (iParam1 == 0)
        {
            if (iVar1 > iVar2)
            {
                if (iParam0 == 1)
                {
                    iVar1 = iVar2;
                }
                if (iParam0 == 2 || iParam0 == 3)
                {
                    iVar1 = iVar2;
                }
            }
        }
        if (bParam7)
        {
            func_143(1161, iVar1, -1);
            if (iParam1 == 0)
            {
                func_134((func_142(unk_0x3D35F9864E4640B1()) + iVar1), iParam9, 0);
                if (iParam8 == 0)
                {
                }
                if (iParam9 == 0)
                {
                }
                unk_0xC0EC11F1BDB694AB(iVar1, iParam8, iParam9);
                if (Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_2 != -1)
                {
                    func_143(1162, iVar1, -1);
                }
                if (iParam1 == 0)
                {
                    func_128(iVar1);
                }
            }
        }
        if (bParam5)
        {
        }
        if (bParam7)
        {
            if (iParam6 == -1)
            {
                func_124((func_126(unk_0x3D35F9864E4640B1()) + iVar1));
            }
            else
            {
                func_124((func_126(unk_0x3D35F9864E4640B1()) + iParam6));
            }
        }
        if (bParam7)
        {
        }
    }
    return iVar1;
}

void func_124(int iParam0)
{
    if (func_154())
    {
        Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_5 = iParam0;
        func_125(joaat("mpply_globalxp"), iParam0);
    }
}

void func_125(int iParam0, int iParam1)
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
    }
}

int func_126(int iParam0)
{
    if (iParam0 > -1)
    {
        if (func_346(iParam0, 0, 1))
        {
            if (iParam0 == unk_0x3D35F9864E4640B1())
            {
                return func_127(joaat("mpply_globalxp"));
            }
            else
            {
                return Global_1593076[iParam0 /*647*/].f_204.f_5;
            }
        }
        else
        {
            return func_127(joaat("mpply_globalxp"));
        }
    }
    return 0;
}

int func_127(int iParam0)
{
    int iVar0;
    var uVar1;
    
    iVar0 = iParam0;
    if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_128(int iParam0)
{
    struct<13> Var0;
    int iVar1;
    
    Var0 = { func_133(unk_0x3D35F9864E4640B1()) };
    if (unk_0x1AE803DF5F9B30C9())
    {
        if (unk_0xF3F1AD16A136B115(&Var0))
        {
            iVar1 = func_131(func_132(&Var0));
            if (iVar1 == 0)
            {
                func_130(&Global_1364944, iParam0);
                func_129(joaat("mpply_crew_local_xp_0"), Global_1364944);
            }
            else if (iVar1 == 1)
            {
                func_130(&Global_1364945, iParam0);
                func_129(joaat("mpply_crew_local_xp_1"), Global_1364945);
            }
            else if (iVar1 == 2)
            {
                func_130(&Global_1364946, iParam0);
                func_129(joaat("mpply_crew_local_xp_2"), Global_1364946);
            }
            else if (iVar1 == 3)
            {
                func_130(&Global_1364947, iParam0);
                func_129(joaat("mpply_crew_local_xp_3"), Global_1364947);
            }
            else if (iVar1 == 4)
            {
                func_130(&Global_1364948, iParam0);
                func_129(joaat("mpply_crew_local_xp_4"), Global_1364948);
            }
        }
    }
}

void func_129(int iParam0, int iParam1)
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != 0)
    {
        unk_0xE931A869061F7BD2(iVar0, iParam1, 1);
    }
    switch (iParam0)
    {
        case joaat("mpply_crew_0_id"):
            Global_1364939 = iParam1;
            break;
        
        case joaat("mpply_crew_1_id"):
            Global_1364941 = iParam1;
            break;
        
        case joaat("mpply_crew_2_id"):
            Global_1364941 = iParam1;
            break;
        
        case joaat("mpply_crew_3_id"):
            Global_1364942 = iParam1;
            break;
        
        case joaat("mpply_crew_4_id"):
            Global_1364943 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_0"):
            Global_1364944 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_1"):
            Global_1364945 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_2"):
            Global_1364946 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_3"):
            Global_1364947 = iParam1;
            break;
        
        case joaat("mpply_crew_local_xp_4"):
            Global_1364948 = iParam1;
            break;
        
        case joaat("mpply_became_cheater_num"):
            Global_1364949 = iParam1;
            break;
        
        case joaat("mpply_friendly"):
            Global_1364950 = iParam1;
            break;
        
        case joaat("mpply_offensive_language"):
            Global_1364951 = iParam1;
            break;
        
        case joaat("mpply_griefing"):
            Global_1364952 = iParam1;
            break;
        
        case joaat("mpply_helpful"):
            Global_1364953 = iParam1;
            break;
        
        case joaat("mpply_offensive_tagplate"):
            Global_1364954 = iParam1;
            break;
        
        case joaat("mpply_offensive_ugc"):
            Global_1364955 = iParam1;
            break;
        
        default:
            break;
    }
}

void func_130(var uParam0, int iParam1)
{
    *uParam0 = (*uParam0 + iParam1);
}

int func_131(int iParam0)
{
    if (iParam0 == Global_1364939)
    {
        return 0;
    }
    else if (iParam0 == Global_1364940)
    {
        return 1;
    }
    else if (iParam0 == Global_1364941)
    {
        return 2;
    }
    else if (iParam0 == Global_1364942)
    {
        return 3;
    }
    else if (iParam0 == Global_1364943)
    {
        return 4;
    }
    else
    {
        return -1;
    }
    return -1;
}

int func_132(var uParam0)
{
    if (unk_0x1AE803DF5F9B30C9())
    {
        if (unk_0xF3F1AD16A136B115(uParam0))
        {
            return Global_2455041;
        }
    }
    return Global_2455041;
}

struct<13> func_133(int iParam0)
{
    struct<13> Var0;
    
    unk_0xA82433D60351864D(iParam0, &Var0, 13);
    return Var0;
}

void func_134(int iParam0, int iParam1, int iParam2)
{
    if (func_154())
    {
        if (iParam0 >= 1787576850)
        {
            iParam0 = 1787576850;
        }
        if (Global_262145.f_8806 == 0 && iParam1 != -1076930708)
        {
            if (iParam2 == 0)
            {
                if (iParam0 < Global_1365059[func_141(-1)])
                {
                    unk_0xC0EC11F1BDB694AB(iParam0, -523908350, iParam1);
                    return;
                }
                else if (iParam0 == Global_1365059[func_141(-1)])
                {
                    return;
                }
            }
        }
        if (Global_262145.f_8805 == 0)
        {
            if (iParam0 == 0)
            {
                unk_0xC0EC11F1BDB694AB(iParam0, -1158693853, -1345423847);
                if (iParam2 == 0)
                {
                    return;
                }
            }
        }
        if (Global_262145.f_8805 == 0)
        {
            if (iParam0 < 0)
            {
                unk_0xC0EC11F1BDB694AB(iParam0, -1586921397, iParam1);
                return;
            }
        }
        if (func_140(unk_0x3D35F9864E4640B1()))
        {
            Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_1 = iParam0;
            Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_204.f_6 = func_158(iParam0, 1);
        }
        func_139(636, iParam0, -1, 1);
        func_138(637, func_158(iParam0, 1), -1, 1, 0);
        Global_1365059[func_141(-1)] = iParam0;
        func_135(7, 0);
    }
}

void func_135(int iParam0, int iParam1)
{
    int iVar0;
    
    if (func_137(iParam0, iParam1))
    {
        iVar0 = func_136();
        Global_2455018[iVar0] = iParam0;
    }
}

int func_136()
{
    int iVar0;
    int iVar1;
    
    iVar0 = 9;
    iVar1 = 0;
    while (iVar1 <= 9)
    {
        if (Global_2455018[iVar1] == 0)
        {
            iVar0 = iVar1;
            iVar1 = 10;
        }
        iVar1++;
    }
    return iVar0;
}

int func_137(int iParam0, var uParam1)
{
    if (Global_1312841)
    {
        return 0;
    }
    if (iParam0 == 22)
    {
        return 1;
    }
    if ((((((((uParam1 || !Global_1312853) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    return 1;
}

void func_138(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
    int iVar0;
    
    if (bParam4)
    {
    }
    iVar0 = Global_2511967[iParam0 /*3*/][func_141(iParam2)];
    if (iVar0 != 0)
    {
        unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
    }
}

void func_139(int iParam0, int iParam1, int iParam2, int iParam3)
{
    int iVar0;
    
    iVar0 = Global_2511967[iParam0 /*3*/][func_141(iParam2)];
    if (iVar0 != 0)
    {
        unk_0xE931A869061F7BD2(iVar0, iParam1, iParam3);
    }
    switch (iParam0)
    {
        case 784:
            Global_1365005[func_141(iParam2)] = iParam1;
            break;
        
        case 785:
            Global_1365011[func_141(iParam2)] = iParam1;
            break;
        
        case 786:
            Global_1365017[func_141(iParam2)] = iParam1;
            break;
        
        case 787:
            Global_1365023[func_141(iParam2)] = iParam1;
            break;
        
        case 774:
            Global_1364981[func_141(iParam2)] = iParam1;
            break;
        
        case 775:
            Global_1364987[func_141(iParam2)] = iParam1;
            break;
        
        case 776:
            Global_1364993[func_141(iParam2)] = iParam1;
            break;
        
        case 777:
            Global_1364999[func_141(iParam2)] = iParam1;
            break;
        
        case 764:
            Global_1364957[func_141(iParam2)] = iParam1;
            break;
        
        case 765:
            Global_1364963[func_141(iParam2)] = iParam1;
            break;
        
        case 766:
            Global_1364969[func_141(iParam2)] = iParam1;
            break;
        
        case 767:
            Global_1364975[func_141(iParam2)] = iParam1;
            break;
        
        case 754:
            Global_1365029[func_141(iParam2)] = iParam1;
            break;
        
        case 755:
            Global_1365035[func_141(iParam2)] = iParam1;
            break;
        
        case 756:
            Global_1365041[func_141(iParam2)] = iParam1;
            break;
        
        case 757:
            Global_1365047[func_141(iParam2)] = iParam1;
            break;
        
        case 1300:
            Global_1365053[func_141(iParam2)] = iParam1;
            break;
        
        case 636:
            Global_1365059[func_141(iParam2)] = iParam1;
            break;
        
        case 1275:
            Global_1365065[func_141(iParam2)] = iParam1;
            break;
        
        case 1873:
            Global_2536117[0 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 2264:
            Global_2536117[1 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 2916:
            Global_2536117[2 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3045:
            Global_2536117[3 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 6671:
            Global_2536194[func_141(iParam2)] = iParam1;
            break;
        
        case 761:
            Global_1365071[func_141(iParam2)] = iParam1;
            break;
        
        case 762:
            Global_1365077[func_141(iParam2)] = iParam1;
            break;
        
        case 763:
            Global_1365083[func_141(iParam2)] = iParam1;
            break;
        
        case 1233:
            Global_1365089[func_141(iParam2)] = iParam1;
            break;
        
        case 3040:
            Global_2536154[0 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3041:
            Global_2536154[1 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3042:
            Global_2536154[2 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3043:
            Global_2536154[3 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3044:
            Global_2536154[4 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3623:
            Global_2536197[0 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3624:
            Global_2536197[1 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3625:
            Global_2536197[2 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3626:
            Global_2536197[3 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3627:
            Global_2536197[4 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3628:
            Global_2536213[0 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3629:
            Global_2536213[1 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3630:
            Global_2536213[2 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3631:
            Global_2536213[3 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3632:
            Global_2536213[4 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3208:
            Global_2536154[5 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3214:
            Global_2536117[4 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3650:
            Global_2536229[func_141(iParam2)] = iParam1;
            break;
        
        case 3651:
            Global_2536238[func_141(iParam2)] = iParam1;
            break;
        
        case 3652:
            Global_2536232[func_141(iParam2)] = iParam1;
            break;
        
        case 3653:
            Global_2536241[func_141(iParam2)] = iParam1;
            break;
        
        case 3654:
            Global_2536235[func_141(iParam2)] = iParam1;
            break;
        
        case 3655:
            Global_2536244[func_141(iParam2)] = iParam1;
            break;
        
        case 3676:
            Global_2536247[func_141(iParam2)] = iParam1;
            break;
        
        case 3216:
            Global_2536154[6 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3217:
            Global_2536117[5 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3221:
            Global_2536154[7 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3219:
            Global_2536117[6 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3998:
            Global_2536154[8 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 3999:
            Global_2536117[7 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4001:
            Global_2536154[9 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4002:
            Global_2536117[8 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4004:
            Global_2536154[10 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4005:
            Global_2536117[9 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4007:
            Global_2536154[11 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 4008:
            Global_2536117[10 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 6088:
            Global_2536154[12 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        case 6089:
            Global_2536117[11 /*3*/][func_141(iParam2)] = iParam1;
            break;
        
        default:
            break;
    }
}

int func_140(int iParam0)
{
    if (iParam0 == -1)
    {
        return 0;
    }
    else
    {
        return unk_0x2A3398C6222EB190(Global_2434915.f_1, iParam0);
    }
    return 1;
}

int func_141(int iParam0)
{
    int iVar0;
    int iVar1;
    
    iVar0 = iParam0;
    if (iVar0 == -1)
    {
        iVar1 = func_17();
        if (iVar1 > -1)
        {
            Global_2511680 = 0;
            iVar0 = iVar1;
        }
        else
        {
            iVar0 = 0;
            Global_2511680 = 1;
        }
    }
    return iVar0;
}

int func_142(int iParam0)
{
    if (Global_1312466.f_9 == 0)
    {
        if (iParam0 > -1)
        {
            if (iParam0 == unk_0x3D35F9864E4640B1())
            {
                return Global_1365059[func_141(-1)];
            }
            else if (func_140(iParam0))
            {
                return Global_1593076[iParam0 /*647*/].f_204.f_1;
            }
        }
    }
    else
    {
        return Global_1365059[func_141(-1)];
    }
    return 0;
}

void func_143(int iParam0, int iParam1, int iParam2)
{
    int iVar0;
    
    iVar0 = func_145(iParam0, func_141(iParam2), 0);
    iVar0 = (iVar0 + iParam1);
    if (!func_144(iParam0))
    {
        func_138(iParam0, iVar0, iParam2, 1, 0);
    }
    else
    {
        func_139(iParam0, iVar0, iParam2, 1);
    }
}

int func_144(int iParam0)
{
    if (Global_1364938)
    {
        switch (iParam0)
        {
            case 784:
            case 785:
            case 786:
            case 787:
            case 774:
            case 775:
            case 776:
            case 777:
            case 764:
            case 765:
            case 766:
            case 767:
            case 754:
            case 755:
            case 756:
            case 757:
            case 1300:
            case 636:
            case 1275:
            case 761:
            case 762:
            case 763:
            case 1233:
            case 1873:
            case 2264:
            case 2916:
            case 3045:
            case 6671:
            case 3040:
            case 3041:
            case 3042:
            case 3043:
            case 3044:
            case 3219:
            case 3221:
            case 3623:
            case 3624:
            case 3625:
            case 3626:
            case 3627:
            case 3628:
            case 3629:
            case 3630:
            case 3631:
            case 3632:
            case 3214:
            case 3208:
            case 3650:
            case 3651:
            case 3652:
            case 3653:
            case 3654:
            case 3655:
            case 3676:
            case 3217:
            case 3216:
            case 3999:
            case 3998:
            case 4002:
            case 4001:
            case 4005:
            case 4004:
            case 4008:
            case 4007:
            case 6089:
            case 6088:
                return 1;
                break;
            }
    }
    return 0;
}

int func_145(int iParam0, int iParam1, int iParam2)
{
    int iVar0;
    var uVar1;
    
    if (iParam2 == 0)
    {
    }
    iVar0 = Global_2511967[iParam0 /*3*/][func_141(iParam1)];
    if (unk_0x2553A7EB99AABF55(iVar0, &uVar1, -1))
    {
        return uVar1;
    }
    return 0;
}

void func_146(int iParam0)
{
    int iVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar1 = unk_0xB5E2A107E006EC7A(unk_0x3D35F9864E4640B1());
    iVar0 = 0;
    while (iVar0 < unk_0x32C41AA379415932())
    {
        iVar4 = unk_0xDF6AF3C6DAF25A51(iVar0);
        if (unk_0xA3C5F17FDDF2701D(iVar4))
        {
            iVar5 = unk_0x3F3ED1FF7CF1C641(iVar4);
            if (unk_0xB5E2A107E006EC7A(iVar5) != -1)
            {
                if (unk_0xB5E2A107E006EC7A(iVar5) == iVar1 || func_91(unk_0xB5E2A107E006EC7A(iVar5), iVar1, 0))
                {
                    iVar2++;
                    if (iVar5 != unk_0x3D35F9864E4640B1())
                    {
                        if (func_148(unk_0x3D35F9864E4640B1(), iVar5))
                        {
                            bVar3 = true;
                        }
                    }
                }
            }
        }
        iVar0++;
    }
    if (bVar3)
    {
        iVar6 = round((func_147(*iParam0, 100) * (10f * Global_262145.f_4217)));
    }
    if (iVar2 > 4)
    {
        iVar2 = 4;
    }
    if (iVar2 >= 2)
    {
        iVar7 = round((func_147(*iParam0, 100) * (20f * Global_262145.f_4210)));
    }
    *iParam0 = (*iParam0 + iVar6);
    *iParam0 = (*iParam0 + iVar7);
}

float func_147(int iParam0, int iParam1)
{
    float fVar0;
    float fVar1;
    float fVar2;
    
    fVar0 = to_float(iParam0);
    fVar1 = to_float(iParam1);
    fVar2 = (fVar0 / fVar1);
    return fVar2;
}

int func_148(int iParam0, int iParam1)
{
    if (unk_0x1AE803DF5F9B30C9())
    {
        Global_2488575 = { func_133(iParam0) };
        Global_2488588 = { func_133(iParam1) };
        if (unk_0xF3F1AD16A136B115(&Global_2488575))
        {
            if (unk_0xF3F1AD16A136B115(&Global_2488588))
            {
                unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575);
                unk_0x7838EB8661A32D68(&Global_2488540, 35, &Global_2488588);
                if (Global_2488505 == Global_2488540)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void func_149(bool bParam0, int iParam1)
{
    int iVar0;
    int iVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    if (bParam0)
    {
        iVar0 = 0;
        while (iVar0 < unk_0x32C41AA379415932())
        {
            iVar3 = iVar0;
            if (unk_0xA3C5F17FDDF2701D(iVar3))
            {
                iVar4 = unk_0x3F3ED1FF7CF1C641(iVar3);
                if (func_346(iVar4, 0, 1))
                {
                    if (iVar4 != unk_0x3D35F9864E4640B1())
                    {
                        iVar1++;
                        if (func_148(unk_0x3D35F9864E4640B1(), iVar4))
                        {
                            bVar2 = true;
                        }
                    }
                }
            }
            iVar0++;
        }
    }
    else
    {
        iVar0 = 0;
        while (iVar0 < 32)
        {
            iVar4 = iVar0;
            if (func_346(iVar4, 1, 1))
            {
                if (iVar4 != unk_0x3D35F9864E4640B1())
                {
                    if (func_150(unk_0x3D35F9864E4640B1(), iVar4) <= 20f)
                    {
                        iVar1++;
                        if (func_148(unk_0x3D35F9864E4640B1(), iVar4))
                        {
                            bVar2 = true;
                        }
                    }
                }
            }
            iVar0++;
        }
    }
    if (bVar2)
    {
        iVar5 = round((func_147(*iParam1, 100) * (10f * Global_262145.f_4217)));
    }
    if (iVar1 > 4)
    {
        iVar1 = 4;
    }
    if (iVar1 >= 1)
    {
        iVar6 = round((func_147(*iParam1, 100) * (20f * Global_262145.f_4210)));
    }
    *iParam1 = (*iParam1 + iVar5);
    *iParam1 = (*iParam1 + iVar6);
}

float func_150(int iParam0, int iParam1)
{
    return vdist(func_18(iParam0), func_18(iParam1));
    return 0f;
}

int func_151(int iParam0)
{
    int iVar0;
    
    if (unk_0x1DB8DA6E03DC888B() != 3)
    {
        return *iParam0;
    }
    iVar0 = round((func_147(*iParam0, 100) * 25f));
    *iParam0 = (*iParam0 + iVar0);
    return *iParam0;
}

int func_152(int iParam0)
{
    if (iParam0 < 0)
    {
        if (unk_0x0C58CE21DE9AD283(iParam0) > func_142(unk_0x3D35F9864E4640B1()))
        {
            iParam0 = -func_142(unk_0x3D35F9864E4640B1());
        }
    }
    if (func_153(8000, 0, 0) > 0)
    {
        if (func_153(8000, 0, 0) < (iParam0 + func_142(unk_0x3D35F9864E4640B1())))
        {
            iParam0 = (func_153(8000, 0, 0) - func_142(unk_0x3D35F9864E4640B1()));
        }
    }
    return iParam0;
}

int func_153(int iParam0, bool bParam1, int iParam2)
{
    if (iParam2 == 0)
    {
    }
    if (bParam1)
    {
    }
    if (iParam0 >= 8000)
    {
        iParam0 = 8000;
    }
    return Global_283571[iParam0];
}

int func_154()
{
    return 1;
}

int func_155(char* sParam0)
{
    if (unk_0x996B09F758C57FBE(sParam0))
    {
        return 1;
    }
    else if (unk_0xB3404E397FF56B3B(sParam0, "") || unk_0xB3404E397FF56B3B(sParam0, "0"))
    {
        return 1;
    }
    return 0;
}

bool func_156(int iParam0)
{
    return Global_2422142[iParam0 /*399*/].f_124 == 2;
}

bool func_157(int iParam0)
{
    return Global_2422142[iParam0 /*399*/].f_124 == 7;
}

int func_158(int iParam0, bool bParam1)
{
    if (bParam1)
    {
    }
    return func_159(iParam0, 0);
}

int func_159(int iParam0, int iParam1)
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    float fVar4;
    
    if (iParam1 == 0)
    {
    }
    iVar1 = 8000;
    iVar2 = 0;
    iVar3 = ((iVar1 - iVar2) / 2);
    iVar0 = 0;
    while (iVar0 <= 100)
    {
        if (iVar1 == iVar2)
        {
            iVar0 = 8000;
            if (iVar3 == 0)
            {
                iVar3 = 1;
            }
            return iVar3;
        }
        if (Global_283571[iVar3] == iParam0)
        {
            iVar1 = iVar3;
            iVar2 = iVar3;
        }
        else if (Global_283571[iVar3] < iParam0)
        {
            if (iVar2 == iVar3)
            {
                iVar2++;
            }
            else
            {
                iVar2 = iVar3;
            }
        }
        else if (iVar1 == iVar3)
        {
            iVar1 = (iVar1 - 1);
        }
        else
        {
            iVar1 = iVar3;
        }
        fVar4 = (((to_float(iVar1) - to_float(iVar2)) / 2f) + to_float(iVar2));
        iVar3 = round(fVar4);
        iVar0++;
    }
    return 8000;
}

int func_160(int iParam0, bool bParam1)
{
    if (bParam1)
    {
    }
    return func_142(iParam0);
}

void func_161(char* sParam0, bool bParam1)
{
    if (unk_0x0BD3CCFB6C6CFA91(sParam0))
    {
        return;
    }
    if (unk_0x3222F8FFDC06381F(sParam0) > 23)
    {
        return;
    }
    if (func_165(sParam0))
    {
        return;
    }
    func_51();
    Global_1312575 = 0;
    StringCopy(&(Global_1312575.f_1), unk_0x49CAADAD1ABAB70A(), 32);
    Global_1312575.f_9 = unk_0x50B7853132D8438E(&(Global_1312575.f_1));
    StringCopy(&(Global_1312575.f_12), sParam0, 16);
    func_164();
    func_163(bParam1);
    func_162();
}

void func_162()
{
    unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 1);
}

void func_163(bool bParam0)
{
    if (bParam0)
    {
        unk_0xCD7E92DE2BFA0B0D(&(Global_1312575.f_59), 0);
        return;
    }
    unk_0xD804ACF2A7171150(&(Global_1312575.f_59), 0);
}

void func_164()
{
    Global_1312575.f_10 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 86400000);
    Global_1312575.f_11 = unk_0x898811EA80D35DE2();
}

bool func_165(char* sParam0)
{
    if (!func_56())
    {
        return 0;
    }
    if (Global_1312575 == 11)
    {
        return func_166(sParam0);
    }
    if (unk_0x0BD3CCFB6C6CFA91(sParam0))
    {
        return 0;
    }
    return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_12));
}

bool func_166(char* sParam0)
{
    if (!func_56())
    {
        return 0;
    }
    if (unk_0x0BD3CCFB6C6CFA91(sParam0))
    {
        return 0;
    }
    return unk_0x50B7853132D8438E(sParam0) == unk_0x50B7853132D8438E(&(Global_1312575.f_16));
}

int func_167(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
    if (Global_1593076[iParam0 /*647*/].f_259.f_16 > 0)
    {
        if (bParam1)
        {
            if (unk_0x2A3398C6222EB190(Global_1593076[iParam0 /*647*/].f_259.f_14, 0))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    if (!bParam2)
    {
        if (func_173(iParam0))
        {
            return 1;
        }
    }
    if (!bParam3)
    {
        if (func_172(iParam0))
        {
            return 1;
        }
    }
    if (!bParam4)
    {
        if (func_171(iParam0))
        {
            return 1;
        }
    }
    if (!bParam5)
    {
        if (func_170(iParam0))
        {
            return 1;
        }
    }
    if (!bParam6)
    {
        if (func_168(iParam0))
        {
            return 1;
        }
    }
    return 0;
}

int func_168(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (func_346(iParam0, 1, 1))
        {
            if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
            {
                return func_169(Global_2422142[iParam0 /*399*/].f_318.f_1) == 7;
            }
        }
    }
    return 0;
}

int func_169(int iParam0)
{
    switch (iParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
            return 0;
            break;
        
        case 60:
        case 61:
        case 62:
        case 63:
        case 64:
        case 65:
        case 66:
        case 67:
        case 68:
        case 69:
            return 1;
            break;
        
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 30:
        case 31:
        case 32:
        case 33:
        case 34:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
        case 40:
        case 41:
            return 2;
            break;
        
        case 43:
        case 42:
        case 44:
        case 45:
        case 46:
        case 47:
        case 48:
        case 49:
        case 50:
        case 51:
        case 52:
        case 53:
        case 54:
        case 55:
        case 56:
        case 57:
        case 58:
        case 59:
            return 3;
            break;
        
        case 70:
        case 71:
        case 72:
        case 73:
        case 74:
        case 75:
        case 76:
        case 77:
        case 78:
        case 79:
        case 80:
            return 4;
            break;
        
        case 81:
            return 5;
            break;
        
        case 82:
            return 6;
            break;
        
        case 83:
        case 84:
        case 85:
        case 86:
        case 87:
            return 7;
            break;
    }
    return -1;
}

int func_170(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (func_346(iParam0, 1, 1))
        {
            if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
            {
                return func_169(Global_2422142[iParam0 /*399*/].f_318.f_1) == 4;
            }
        }
    }
    return 0;
}

int func_171(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (func_346(iParam0, 1, 1))
        {
            if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
            {
                return func_169(Global_2422142[iParam0 /*399*/].f_318.f_1) == 1;
            }
        }
    }
    return 0;
}

int func_172(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (func_346(iParam0, 1, 1))
        {
            if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
            {
                return func_169(Global_2422142[iParam0 /*399*/].f_318.f_1) == 2;
            }
        }
    }
    return 0;
}

int func_173(int iParam0)
{
    if (iParam0 != func_59())
    {
        if (func_346(iParam0, 1, 1))
        {
            if (Global_2422142[iParam0 /*399*/].f_318.f_1 != -1)
            {
                return func_169(Global_2422142[iParam0 /*399*/].f_318.f_1) == 0;
            }
        }
    }
    return 0;
}

var func_174()
{
    return Global_2415153.f_1176;
}

int func_175()
{
    if (func_176(16))
    {
        return 1;
    }
    if (func_176(0))
    {
        return 1;
    }
    return 0;
}

bool func_176(int iParam0)
{
    int iVar0;
    
    iVar0 = func_145(2467, -1, 0);
    return unk_0x2A3398C6222EB190(iVar0, iParam0);
}

void func_177(int iParam0, int iParam1)
{
    int iVar0;
    
    iVar0 = func_189(iParam0);
    if (iVar0 == -1)
    {
        return;
    }
    if (!iParam1 == Global_2394155[iVar0 /*44*/].f_7)
    {
        return;
    }
    if (!Global_2394155[iVar0 /*44*/].f_3 && Global_2394155[iVar0 /*44*/])
    {
        Global_2394155[iVar0 /*44*/].f_3 = 1;
        func_181();
    }
    func_178(iVar0);
}

void func_178(int iParam0)
{
    int iVar0;
    int iVar1;
    
    if (iParam0 >= Global_1364781)
    {
        return;
    }
    if (Global_2394155[iParam0 /*44*/].f_25 != -1)
    {
        unk_0x184D9974941265BF(Global_2394155[iParam0 /*44*/].f_25);
    }
    iVar0 = iParam0;
    iVar1 = iVar0 + 1;
    while (iVar1 < Global_1364781)
    {
        Global_2394155[iVar0 /*44*/] = { Global_2394155[iVar1 /*44*/] };
        Global_2394155[iVar0 /*44*/] = { Global_2394155[iVar1 /*44*/] };
        iVar0++;
        iVar1++;
    }
    func_180(iVar0);
    Global_1364781 = (Global_1364781 - 1);
    if (Global_1364752)
    {
        if (Global_1364750 > 0)
        {
            func_179();
        }
    }
}

void func_179()
{
    Global_1364752 = 0;
}

void func_180(int iParam0)
{
    Global_2394155[iParam0 /*44*/] = 0;
    Global_2394155[iParam0 /*44*/].f_1 = 0;
    Global_2394155[iParam0 /*44*/].f_2 = 0;
    Global_2394155[iParam0 /*44*/].f_3 = 0;
    Global_2394155[iParam0 /*44*/].f_4 = func_59();
    Global_2394155[iParam0 /*44*/].f_5 = 145;
    Global_2394155[iParam0 /*44*/].f_6 = 1;
    Global_2394155[iParam0 /*44*/].f_7 = -1;
    Global_2394155[iParam0 /*44*/].f_8 = -1;
    StringCopy(&(Global_2394155[iParam0 /*44*/].f_9), "", 64);
    Global_2394155[iParam0 /*44*/].f_25 = -1;
    StringCopy(&(Global_2394155[iParam0 /*44*/].f_26), "", 32);
    Global_2394155[iParam0 /*44*/].f_34 = -1;
    Global_2394155[iParam0 /*44*/].f_35 = -1;
    Global_2394155[iParam0 /*44*/].f_36 = 0;
    Global_2394155[iParam0 /*44*/].f_38 = 0;
    Global_2394155[iParam0 /*44*/].f_39 = -1;
    Global_2394155[iParam0 /*44*/].f_40 = 0;
    Global_2394155[iParam0 /*44*/].f_41 = 0;
    Global_2394155[iParam0 /*44*/].f_42 = 0;
    if (unk_0x27CA09C6DFAB1E79())
    {
        Global_2394155[iParam0 /*44*/].f_37 = unk_0x898811EA80D35DE2();
    }
}

void func_181()
{
    Global_16808 = (Global_16808 - 1);
    if (Global_16808 < 0)
    {
        func_188("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
    }
    func_182();
}

void func_182()
{
    if (!Global_14605)
    {
        if (Global_14443.f_1 == 6)
        {
            func_187(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
            func_183(1);
            func_187(Global_14424, "DISPLAY_VIEW", 1f, to_float(Global_14423), -1082130432, -1082130432, -1082130432);
        }
    }
}

void func_183(int iParam0)
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    
    Global_16813 = 0;
    Global_2918 = iParam0;
    iVar0 = 0;
    while (iVar0 < 9)
    {
        Global_2882[iVar0] = 0;
        iVar0++;
    }
    iVar0 = 0;
    while (iVar0 < 9)
    {
        iVar1 = 0;
        if (func_186(14))
        {
            while (iVar1 < 34)
            {
                if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
                {
                    if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
                    {
                        if (Global_2882[iVar0] == 0)
                        {
                            Global_2846[iVar0] = iVar1;
                            if (iVar1 == 3)
                            {
                                if (unk_0x2A3398C6222EB190(Global_2314, 3))
                                {
                                    iVar2 = 42;
                                    Global_14608 = 1;
                                }
                                else
                                {
                                    iVar2 = 255;
                                    Global_14608 = 0;
                                }
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(iVar2);
                                unk_0x1C703A54AB4B12F6();
                            }
                            if (Global_2455109)
                            {
                                if (iVar1 == 14)
                                {
                                    func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                                }
                            }
                            Global_2882[iVar0] = 1;
                        }
                    }
                }
                iVar1++;
            }
        }
        else
        {
            while (iVar1 < 34)
            {
                if (iParam0 == Global_2320[iVar1 /*15*/].f_11)
                {
                    if (iVar0 == Global_2320[iVar1 /*15*/].f_4)
                    {
                        if (Global_2882[iVar0] == 0)
                        {
                            Global_2846[iVar0] = iVar1;
                            if (iVar1 == 1)
                            {
                                iVar3 = 0;
                                while (iVar3 < 35)
                                {
                                    if (Global_104439.f_14002[iVar3 /*104*/].f_24 != 0)
                                    {
                                        if (Global_104439.f_14002[iVar3 /*104*/].f_28 == 0)
                                        {
                                            if (Global_104439.f_14002[iVar3 /*104*/].f_99[Global_14443] == 1)
                                            {
                                                Global_16813++;
                                            }
                                        }
                                    }
                                    iVar3++;
                                }
                                func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(Global_16813), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                            }
                            else if (iVar1 == 7)
                            {
                                if (Global_70785)
                                {
                                    iVar4 = 0;
                                    iVar4 = Global_2606876;
                                    iVar5 = 0;
                                    while (iVar5 < 12)
                                    {
                                        if (Global_2606877[iVar5 /*104*/].f_24 != 0)
                                        {
                                            if (Global_2606877[iVar5 /*104*/].f_28 == 0)
                                            {
                                                if (Global_2606877[iVar5 /*104*/].f_99[Global_14443] == 1)
                                                {
                                                    iVar4++;
                                                }
                                            }
                                        }
                                        iVar5++;
                                    }
                                    func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(iVar4), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                                }
                                else
                                {
                                    switch (Global_14443)
                                    {
                                        case 0:
                                            iVar6 = Global_36949;
                                            break;
                                        
                                        case 1:
                                            iVar6 = Global_36950;
                                            break;
                                        
                                        case 2:
                                            iVar6 = Global_36951;
                                            break;
                                        
                                        default:
                                            break;
                                    }
                                    func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(iVar6), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                                }
                            }
                            else if (iVar1 == 14)
                            {
                                func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(Global_16808), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                            }
                            else if (iVar1 == 20)
                            {
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(Global_2319);
                                unk_0x1C703A54AB4B12F6();
                            }
                            else if (iVar1 == 2)
                            {
                                if (unk_0x2A3398C6222EB190(Global_2314, 6))
                                {
                                    iVar7 = 42;
                                }
                                else
                                {
                                    iVar7 = 255;
                                }
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(iVar7);
                                unk_0x1C703A54AB4B12F6();
                            }
                            else if (iVar1 == 3)
                            {
                                if (unk_0x2A3398C6222EB190(Global_2314, 3))
                                {
                                    iVar8 = 42;
                                    Global_14608 = 1;
                                }
                                else
                                {
                                    iVar8 = 255;
                                    Global_14608 = 0;
                                }
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(iVar8);
                                unk_0x1C703A54AB4B12F6();
                            }
                            else if (iVar1 == 8)
                            {
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(42);
                                unk_0x1C703A54AB4B12F6();
                            }
                            else if ((iVar1 == 23 && unk_0xB3404E397FF56B3B(&(Global_2320[iVar1 /*15*/]), "CELL_BENWEB")) && unk_0x2A3398C6222EB190(Global_2314, 6))
                            {
                                unk_0xEBD23F68B1A617FC(Global_14424, "SET_DATA_SLOT");
                                unk_0x32F9127910F63DFA(1);
                                unk_0x32F9127910F63DFA(iVar0);
                                unk_0x32F9127910F63DFA(Global_2320[iVar1 /*15*/].f_10);
                                unk_0x32F9127910F63DFA(0);
                                func_185(&(Global_2320[iVar1 /*15*/]));
                                unk_0x32F9127910F63DFA(42);
                                unk_0x1C703A54AB4B12F6();
                            }
                            else if (Global_2320[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
                            {
                                iVar9 = 0;
                                iVar9 = Global_1622539.f_1;
                                func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(iVar9), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                            }
                            else
                            {
                                func_184(Global_14424, "SET_DATA_SLOT", to_float(1), to_float(iVar0), to_float(Global_2320[iVar1 /*15*/].f_10), to_float(0), -1f, &(Global_2320[iVar1 /*15*/]), 0, 0, 0, 0);
                            }
                            Global_2882[iVar0] = 1;
                        }
                    }
                }
                iVar1++;
            }
        }
        iVar0++;
    }
}

void func_184(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
    unk_0xEBD23F68B1A617FC(uParam0, sParam1);
    unk_0x32F9127910F63DFA(round(fParam2));
    if (fParam3 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam3));
    }
    if (fParam4 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam4));
    }
    if (fParam5 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam5));
    }
    if (fParam6 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam6));
    }
    if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
    {
        func_185(sParam7);
    }
    if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
    {
        func_185(sParam8);
    }
    if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
    {
        func_185(sParam9);
    }
    if (!unk_0x0BD3CCFB6C6CFA91(sParam10))
    {
        func_185(sParam10);
    }
    if (!unk_0x0BD3CCFB6C6CFA91(sParam11))
    {
        func_185(sParam11);
    }
    unk_0x1C703A54AB4B12F6();
}

void func_185(char* sParam0)
{
    unk_0x9BC6C9E77AAC792E(sParam0);
    unk_0xCC5EB3A492FB7D4B();
}

bool func_186(int iParam0)
{
    return Global_35813 == iParam0;
}

void func_187(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
    unk_0xEBD23F68B1A617FC(uParam0, sParam1);
    unk_0x32F9127910F63DFA(round(fParam2));
    if (fParam3 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam3));
    }
    if (fParam4 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam4));
    }
    if (fParam5 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam5));
    }
    if (fParam6 != -1f)
    {
        unk_0x32F9127910F63DFA(round(fParam6));
    }
    unk_0x1C703A54AB4B12F6();
}

void func_188(char* sParam0)
{
    if (Global_16808 != 0)
    {
        if (!unk_0x0BD3CCFB6C6CFA91(sParam0))
        {
        }
        Global_16808 = 0;
    }
}

int func_189(int iParam0)
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1364781)
    {
        if (!Global_2394155[iVar0 /*44*/].f_6)
        {
            if (Global_2394155[iVar0 /*44*/].f_5 == iParam0)
            {
                return iVar0;
            }
        }
        iVar0++;
    }
    return -1;
}

int func_190()
{
    if (!unk_0x2A3398C6222EB190(iLocal_124, 17))
    {
        func_192(12, 116, "", 1);
        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 17);
    }
    else if (!unk_0x2A3398C6222EB190(iLocal_124, 18))
    {
        if (func_191(12, 116))
        {
            unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 18);
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int func_191(int iParam0, int iParam1)
{
    int iVar0;
    
    iVar0 = func_189(iParam0);
    if (iVar0 == -1)
    {
        return 0;
    }
    if (!iParam1 == Global_2394155[iVar0 /*44*/].f_7)
    {
        return 0;
    }
    if (!Global_2394155[iVar0 /*44*/].f_1)
    {
        return 0;
    }
    func_178(iVar0);
    Global_2395295 = unk_0x31CD6E9F83C10233() + 1500;
    return 1;
}

void func_192(int iParam0, int iParam1, char* sParam2, int iParam3)
{
    int iVar0;
    int iVar1;
    bool bVar2;
    struct<4> Var3;
    
    iVar0 = func_189(iParam0);
    if (iVar0 != -1)
    {
        func_178(iVar0);
    }
    iVar1 = iParam0;
    bVar2 = false;
    StringCopy(&Var3, "", 32);
    func_193(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1);
}

void func_193(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8)
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    bool bVar5;
    struct<13> Var6;
    int iVar7;
    
    iVar0 = func_59();
    iVar1 = 145;
    if (bParam2)
    {
        iVar0 = unk_0xA7871E29B06DA901(iParam1);
    }
    else
    {
        iVar1 = iParam1;
    }
    if (bParam2)
    {
        if (func_198())
        {
            return;
        }
    }
    iVar2 = Global_1364781;
    if (iVar2 >= 12)
    {
        iVar2 = (iVar2 - 1);
    }
    iVar3 = (iVar2 - 1);
    while (iVar3 >= 0)
    {
        Global_2394155[iVar2 /*44*/] = { Global_2394155[iVar3 /*44*/] };
        iVar2 = (iVar2 - 1);
        iVar3 = (iVar3 - 1);
    }
    Global_1364781++;
    if (Global_1364781 > 12)
    {
        Global_1364781 = 12;
    }
    iVar4 = 0;
    Global_2394155[iVar4 /*44*/] = 0;
    Global_2394155[iVar4 /*44*/].f_1 = 0;
    Global_2394155[iVar4 /*44*/].f_2 = 0;
    Global_2394155[iVar4 /*44*/].f_3 = 0;
    Global_2394155[iVar4 /*44*/].f_4 = iVar0;
    Global_2394155[iVar4 /*44*/].f_5 = iVar1;
    Global_2394155[iVar4 /*44*/].f_6 = bParam2;
    Global_2394155[iVar4 /*44*/].f_7 = iParam0;
    Global_2394155[iVar4 /*44*/].f_8 = -1;
    StringCopy(&(Global_2394155[iVar4 /*44*/].f_9), sParam3, 64);
    Global_2394155[iVar4 /*44*/].f_25 = -1;
    StringCopy(&(Global_2394155[iVar4 /*44*/].f_26), sParam4, 32);
    Global_2394155[iVar4 /*44*/].f_34 = iParam6;
    Global_2394155[iVar4 /*44*/].f_35 = iParam7;
    Global_2394155[iVar4 /*44*/].f_36 = 0;
    Global_2394155[iVar4 /*44*/].f_37 = unk_0x898811EA80D35DE2();
    Global_2394155[iVar4 /*44*/].f_38 = uParam5;
    Global_2394155[iVar4 /*44*/].f_39 = Global_2395294;
    Global_2394155[iVar4 /*44*/].f_43 = iParam8;
    if (iParam0 == 123)
    {
        Global_2394155[iVar4 /*44*/].f_8 = func_195();
    }
    Global_2395294++;
    func_194();
    Global_2394155[iVar4 /*44*/].f_40 = 0;
    Global_2394155[iVar4 /*44*/].f_41 = 0;
    Global_2394155[iVar4 /*44*/].f_42 = 0;
    if (unk_0x9D3EA2635512FD6B())
    {
        if (bParam2)
        {
            bVar5 = true;
            if (bVar5)
            {
                Var6 = { func_133(iVar0) };
                iVar7 = unk_0xCEF5A5739D7B7C9B(&Var6);
                if (iVar7 != -1)
                {
                    Global_2394155[iVar4 /*44*/].f_40 = iVar7;
                    Global_2394155[iVar4 /*44*/].f_41 = 1;
                    Global_2394155[iVar4 /*44*/].f_42 = 0;
                }
            }
        }
    }
}

void func_194()
{
    Global_1364754 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 30000);
}

int func_195()
{
    vector3 vVar0[24];
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    StringCopy(&cVar0, "", 24);
    cVar0 = { func_197() };
    if (unk_0x0BD3CCFB6C6CFA91(&cVar0) || unk_0xB3404E397FF56B3B(".", &cVar0))
    {
        return -1;
    }
    iVar1 = 0;
    iVar2 = 0;
    iVar1 = 0;
    while (iVar1 < 7)
    {
        switch (iVar1)
        {
            case 0:
                StringCopy(&cVar0, func_196(51, -1), 24);
                break;
            
            case 1:
                StringCopy(&cVar0, func_196(52, -1), 24);
                break;
            
            case 2:
                StringCopy(&cVar0, func_196(53, -1), 24);
                break;
            
            case 3:
                StringCopy(&cVar0, func_196(54, -1), 24);
                break;
            
            case 4:
                StringCopy(&cVar0, func_196(55, -1), 24);
                break;
            
            case 5:
                StringCopy(&cVar0, func_196(56, -1), 24);
                break;
            
            case 6:
                StringCopy(&cVar0, func_196(57, -1), 24);
                break;
            
            default:
                StringCopy(&cVar0, "", 24);
                break;
        }
        if (!unk_0x0BD3CCFB6C6CFA91(&cVar0) && !unk_0xB3404E397FF56B3B(".", &cVar0))
        {
            iVar2++;
        }
        iVar1++;
    }
    if (iVar2 == 0)
    {
        return -1;
    }
    iVar3 = func_145(6188, -1, 0);
    iVar4 = 0;
    iVar1 = 0;
    while (iVar1 < iVar2)
    {
        iVar4 = iVar1 * 3;
        if (iVar4 != -1)
        {
            if (!unk_0x2A3398C6222EB190(iVar3, iVar4))
            {
                return 7;
            }
        }
        iVar1++;
    }
    return 1;
}

var func_196(int iParam0, int iParam1)
{
    var uVar0;
    
    uVar0 = Global_2535328[iParam0 /*3*/][func_141(iParam1)];
    return unk_0xC61E913731D2410D(uVar0, -1);
}

struct<6> func_197()
{
    struct<6> Var0;
    int iVar1;
    int iVar2;
    
    if (unk_0x0BD3CCFB6C6CFA91(&(Global_1773084.f_10)))
    {
        iVar2 = func_145(6189, -1, 0);
        if (iVar2 == 0)
        {
            StringCopy(&Var0, ".", 24);
        }
        else
        {
            iVar1 = 0;
            while (iVar1 < 1118)
            {
                if ((Global_794643.f_4[iVar1 /*88*/].f_65 == 0 && Global_794643.f_4[iVar1 /*88*/].f_68 == 1) && unk_0x2A3398C6222EB190(Global_794643.f_4[iVar1 /*88*/].f_76, 13))
                {
                    if (Global_794643.f_98389[iVar1 /*13*/].f_1 == iVar2)
                    {
                        Var0 = { Global_794643.f_112937[Global_794643.f_98389[iVar1 /*13*/].f_10 /*6*/] };
                        iVar1 = 1118;
                    }
                }
                iVar1++;
            }
            if (unk_0x0BD3CCFB6C6CFA91(&Var0))
            {
            }
        }
        Global_1773084.f_10 = { Var0 };
        return Var0;
    }
    return Global_1773084.f_10;
}

bool func_198()
{
    return Global_1312813 == 10;
}

void func_199()
{
    int iVar0;
    
    iVar0 = Global_1365053[func_141(-1)];
    unk_0xCD7E92DE2BFA0B0D(&iVar0, 8);
    func_139(1300, iVar0, -1, 1);
}

void func_200(int iParam0, bool bParam1)
{
    int iVar0;
    
    iVar0 = 0;
    if (bParam1)
    {
        iVar0 = -1;
    }
    switch (iParam0)
    {
        case 59:
            Global_2097152[func_201() /*11035*/].f_7550.f_19 = iVar0;
            break;
        
        case 19:
            Global_2097152[func_201() /*11035*/].f_7550.f_18 = iVar0;
            break;
        
        case 74:
            Global_2097152[func_201() /*11035*/].f_7550.f_12 = iVar0;
            break;
        
        case 29:
            Global_2097152[func_201() /*11035*/].f_7550.f_14 = iVar0;
            break;
        
        case 8:
            Global_2097152[func_201() /*11035*/].f_7550.f_15 = iVar0;
            break;
        
        case 31:
            Global_2097152[func_201() /*11035*/].f_7550.f_16 = iVar0;
            break;
        
        case 3:
            Global_2097152[func_201() /*11035*/].f_7550.f_20 = iVar0;
            break;
        
        case 6:
            Global_2097152[func_201() /*11035*/].f_7550.f_17 = iVar0;
            break;
        
        case 103:
        case 104:
        case 98:
        case 105:
            Global_2097152[func_201() /*11035*/].f_7550.f_23 = iVar0;
            break;
        
        case 76:
            Global_2097152[func_201() /*11035*/].f_7550.f_24 = iVar0;
            break;
        
        case 93:
            Global_2097152[func_201() /*11035*/].f_7550.f_25 = iVar0;
            break;
        
        case 61:
        case 62:
        case 63:
        case 64:
        case 77:
        case 81:
            Global_2097152[func_201() /*11035*/].f_7550.f_26 = iVar0;
            break;
        
        case 65:
        case 75:
        case 95:
            Global_2097152[func_201() /*11035*/].f_7550.f_27 = iVar0;
            break;
            break;
        
        case 97:
            Global_2097152[func_201() /*11035*/].f_7550.f_29 = iVar0;
            break;
        
        case 88:
            Global_2097152[func_201() /*11035*/].f_7550.f_28 = iVar0;
            break;
        
        case 100:
            Global_2097152[func_201() /*11035*/].f_7550.f_31 = iVar0;
            break;
        
        case 106:
            Global_2097152[func_201() /*11035*/].f_7550.f_32 = iVar0;
            break;
        
        case 99:
            Global_2097152[func_201() /*11035*/].f_7550.f_30 = iVar0;
            break;
    }
}

int func_201()
{
    int iVar0;
    
    iVar0 = 0;
    return iVar0;
}

int func_202()
{
    if (!unk_0x2A3398C6222EB190(iLocal_124, 4))
    {
        if (!unk_0x2A3398C6222EB190(iLocal_124, 8) || (unk_0x2A3398C6222EB190(iLocal_124, 8) && func_33(&uLocal_127, 600000, 0)))
        {
            if (func_208(Local_116.f_5))
            {
                unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 4);
                unk_0xD804ACF2A7171150(&iLocal_124, 8);
            }
        }
    }
    else if (!func_207())
    {
        if (!unk_0x2A3398C6222EB190(iLocal_124, 19))
        {
            if (func_206())
            {
                unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 19);
            }
            else if (!func_205() && !func_203())
            {
                unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 8);
                unk_0xD804ACF2A7171150(&iLocal_124, 4);
                func_40(&uLocal_127, 0, 0);
                iLocal_123 = 0;
            }
        }
        else if (!func_203())
        {
            if (func_205())
            {
                return 1;
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 8);
        unk_0xD804ACF2A7171150(&iLocal_124, 4);
        func_40(&uLocal_127, 0, 0);
        iLocal_123 = 0;
    }
    return 0;
}

bool func_203()
{
    return func_204();
}

bool func_204()
{
    return Global_1348168.f_40 == 3;
}

bool func_205()
{
    return Global_1348168.f_57.f_1;
}

int func_206()
{
    if (Global_15745 == 4)
    {
        if (unk_0xCAD6D8C85D0F329B())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 0;
}

int func_207()
{
    if (Global_16761)
    {
        return 1;
    }
    return 0;
}

int func_208(int iParam0)
{
    int iVar0;
    
    switch (iLocal_123)
    {
        case 0:
            if (func_306(0, 1, 1, 1))
            {
                if (!func_305(12, -1))
                {
                    func_301(iParam0);
                    iLocal_123++;
                }
            }
            break;
        
        case 1:
            iVar0 = func_300(iParam0);
            func_299(iParam0);
            if (func_209(&uLocal_143, iVar0, "FM_1AU", sLocal_308, 0, 0))
            {
                unk_0xD804ACF2A7171150(&iLocal_124, 11);
                iLocal_123++;
            }
            break;
        
        case 2:
            return 1;
            break;
    }
    return 0;
}

int func_209(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
    char* sVar0;
    bool bVar1;
    int iVar2;
    
    if (func_297())
    {
        return 0;
    }
    if (func_296())
    {
        return 0;
    }
    sVar0 = 0;
    bVar1 = false;
    iVar2 = -99;
    return func_210(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_210(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (unk_0x0BD3CCFB6C6CFA91(sParam2))
    {
        return 0;
    }
    if (unk_0x3222F8FFDC06381F(sParam2) > 7)
    {
        return 0;
    }
    if (unk_0x0BD3CCFB6C6CFA91(sParam3))
    {
        return 0;
    }
    if (unk_0x3222F8FFDC06381F(sParam3) > 15)
    {
        return 0;
    }
    iVar0 = unk_0x50B7853132D8438E(unk_0x49CAADAD1ABAB70A());
    iVar1 = func_295(sParam2, sParam3);
    iVar2 = 0;
    if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
    {
        iVar2 = unk_0x50B7853132D8438E(sParam7);
    }
    if (func_294(iVar0, iVar1, iVar2))
    {
        return 1;
    }
    if (!func_289(iParam6))
    {
        return 0;
    }
    if (func_286(iVar0, iVar1, iVar2))
    {
        if (func_285())
        {
            return 0;
        }
        func_284();
        return func_217(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
    }
    if (!func_216(iParam4))
    {
        return 0;
    }
    func_211(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
    return 0;
}

void func_211(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
    Global_1348168.f_40.f_1 = iParam0;
    Global_1348168.f_40.f_2 = iParam1;
    Global_1348168.f_40.f_3 = iParam2;
    StringCopy(&(Global_1348168.f_40.f_4), sParam3, 16);
    Global_1348168.f_40.f_8 = iParam4;
    Global_1348168.f_40.f_9 = iParam5;
    Global_1348168.f_40.f_14 = iParam6;
    func_212(iParam4);
    func_284();
    Global_1348168.f_40.f_13 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), 7000);
}

void func_212(int iParam0)
{
    if (func_215(iParam0))
    {
        func_214();
        return;
    }
    func_213();
}

void func_213()
{
    Global_1348168.f_40.f_10 = 0;
}

void func_214()
{
    Global_1348168.f_40.f_10 = 1;
}

int func_215(int iParam0)
{
    switch (iParam0)
    {
        case 4:
        case 5:
            return 1;
        
        case 0:
        case 1:
        case 7:
        case 8:
        case 2:
        case 3:
            return 0;
        
        default:
    }
    return 0;
}

bool func_216(int iParam0)
{
    return iParam0 > Global_1348168.f_40.f_8;
}

int func_217(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
    struct<2> Var0;
    
    func_283();
    if (iParam6 == 5)
    {
        iParam6 = 0;
    }
    if (iParam5 == 8)
    {
        return func_280(uParam0, sParam3, sParam4);
    }
    if (iParam5 == 4)
    {
        StringCopy(&Var0, "CELL_226", 16);
        return func_277(uParam0, iParam1, sParam3, sParam4, &Var0);
    }
    if (iParam5 == 1 || iParam5 == 7)
    {
        if (iParam6 == 2)
        {
            return func_280(uParam0, sParam3, sParam4);
        }
        return func_261(uParam0, iParam1, sParam3, sParam4, iParam7);
    }
    if (iParam5 == 5)
    {
        return func_260(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
    }
    if (iParam5 == 2)
    {
        return func_250(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
    }
    if (iParam5 == 3)
    {
        return func_249(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
    }
    if (iParam5 == 6)
    {
        return func_218(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
    }
    return 0;
}

int func_218(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
    bool bVar0;
    
    func_248();
    bVar0 = true;
    if (func_220(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
    {
        func_219(120000);
        return 1;
    }
    return 0;
}

void func_219(int iParam0)
{
    Global_1348168.f_40.f_11 = unk_0x3BF8DBF2F2822EBC(unk_0x898811EA80D35DE2(), iParam0);
    Global_1348168.f_40.f_12 = 1;
}

int func_220(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
    int iVar0;
    int iVar1;
    char* sVar2;
    int iVar3;
    char* sVar4;
    var uVar5;
    int iVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    bool bVar12;
    
    iVar0 = func_59();
    iVar1 = 0;
    if (iParam0 == 145)
    {
        iVar0 = iParam1;
        sVar2 = unk_0x06D7899D9C1F422F(iVar0);
        iVar1 = func_242(iVar0);
        if (iVar1 == 0)
        {
            if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
            {
                return 0;
            }
        }
    }
    else
    {
        sVar2 = "";
    }
    iVar3 = 0;
    sVar4 = func_241(sParam5, bParam6, &iVar3);
    uVar5 = func_239(iParam7, &iVar3);
    iVar6 = 0;
    if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
    {
        iVar6++;
        if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
        {
            iVar6++;
        }
    }
    if (unk_0xB3404E397FF56B3B(sVar4, " "))
    {
        sVar4 = "";
    }
    bVar7 = true;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 1;
    iVar11 = 0;
    if (bParam3)
    {
        iVar9 = 1;
        iVar10 = 2;
        iVar11 = 1;
        if (unk_0x2A3398C6222EB190(iParam4, 1))
        {
            iVar8 = 1;
        }
    }
    if (unk_0x2A3398C6222EB190(iParam4, 2))
    {
        iVar10 = 2;
    }
    bVar12 = false;
    if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
    {
        bVar12 = func_238(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
    }
    else
    {
        bVar12 = func_224(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
    }
    if (!bVar12)
    {
        return 0;
    }
    if (unk_0x2A3398C6222EB190(iParam4, 0))
    {
        func_223();
    }
    func_248();
    func_222();
    func_221();
    return 1;
}

void func_221()
{
    Global_1348168.f_57 = 0;
    Global_1348168.f_57.f_1 = 0;
}

void func_222()
{
    Global_1348168.f_40 = 3;
}

void func_223()
{
    unk_0xCD7E92DE2BFA0B0D(&Global_2313, 8);
}

int func_224(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
    int iVar0;
    char* sVar1;
    int iVar2;
    char* sVar3;
    int iVar4;
    char* sVar5;
    char* sVar6;
    int iVar7;
    
    iVar0 = 0;
    sVar1 = "NULL";
    iVar2 = -99;
    sVar3 = "NULL";
    iVar4 = 0;
    sVar5 = "NULL";
    sVar6 = "NULL";
    iVar7 = 3;
    if (func_225(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
    {
        if (bParam7 == 1)
        {
            Global_3020 = iParam6;
            unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
        }
        return 1;
    }
    return 0;
}

int func_225(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
    int iVar0;
    
    if (iParam13 > 99)
    {
    }
    if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
    {
    }
    func_232();
    iVar0 = 0;
    switch (iParam16)
    {
        case 0:
            if (Global_14443 == 0)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        case 2:
            if (Global_14443 == 2)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        case 1:
            if (Global_14443 == 1)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        default:
            iVar0 = 0;
            break;
    }
    if (iVar0 == 0)
    {
        if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
        {
            if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
            {
                return 0;
            }
        }
        if (Global_2608127 == 1)
        {
            return 0;
        }
        if (unk_0x7832F791572D5809(joaat("appemail")) > 0)
        {
            return 0;
        }
        if (unk_0x7832F791572D5809(joaat("appmpemail")) > 0)
        {
            return 0;
        }
    }
    if (func_231() == 0)
    {
        func_229();
        return 0;
    }
    func_228(Global_2608126);
    StringCopy(&(Global_2606877[Global_2608126 /*104*/]), sParam1, 64);
    Global_2606877[Global_2608126 /*104*/].f_17 = uParam0;
    if (iParam2 == 0)
    {
    }
    else
    {
        Global_2606877[Global_2608126 /*104*/].f_24 = iParam2;
    }
    Global_2606877[Global_2608126 /*104*/].f_25 = iParam7;
    Global_2606877[Global_2608126 /*104*/].f_26 = uParam8;
    Global_2606877[Global_2608126 /*104*/].f_29 = uParam9;
    Global_2606877[Global_2608126 /*104*/].f_30 = uParam12;
    Global_2606877[Global_2608126 /*104*/].f_31 = uParam11;
    Global_2606877[Global_2608126 /*104*/].f_28 = 0;
    Global_2606877[Global_2608126 /*104*/].f_32 = iParam3;
    StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_33), sParam4, 64);
    Global_2606877[Global_2608126 /*104*/].f_49 = iParam6;
    StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_50), sParam5, 64);
    Global_2606877[Global_2608126 /*104*/].f_66 = iParam13;
    StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_67), sParam14, 64);
    StringCopy(&(Global_2606877[Global_2608126 /*104*/].f_83), sParam15, 64);
    func_232();
    switch (iParam16)
    {
        case 3:
            Global_2606877[Global_2608126 /*104*/].f_99[Global_14443] = 1;
            break;
        
        case 0:
            Global_2606877[Global_2608126 /*104*/].f_99[0] = 1;
            break;
        
        case 2:
            Global_2606877[Global_2608126 /*104*/].f_99[2] = 1;
            break;
        
        case 1:
            Global_2606877[Global_2608126 /*104*/].f_99[1] = 1;
            break;
    }
    if (iParam16 == 3)
    {
        switch (Global_14443)
        {
            case 0:
                func_227(0);
                break;
            
            case 1:
                func_227(1);
                break;
            
            case 2:
                func_227(2);
                break;
            
            case 3:
                func_227(3);
                break;
            
            default:
                break;
            }
    }
    if (iParam7 == 1)
    {
        switch (iParam16)
        {
            case 3:
                Global_2608127 = 1;
                break;
            
            case 0:
                Global_2608127 = 1;
                break;
            
            case 2:
                Global_2608127 = 1;
                break;
            
            case 1:
                Global_2608127 = 1;
                break;
            }
    }
    Global_16814[Global_2608126] = 0;
    if (bParam10)
    {
        func_232();
        if (Global_14386)
        {
            StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
        }
        else
        {
            switch (Global_14443)
            {
                case 0:
                    StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
                    break;
                
                case 2:
                    StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
                    break;
                
                case 1:
                    StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
                    break;
                
                default:
                    StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
                    break;
                }
        }
        if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
        {
            if (!func_226())
            {
                unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
            }
        }
    }
    if (!Global_14605)
    {
        if (Global_14443.f_1 == 6)
        {
            func_187(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
            func_183(1);
            func_187(Global_14424, "DISPLAY_VIEW", 1f, to_float(Global_14423), -1082130432, -1082130432, -1082130432);
        }
    }
    return 1;
}

bool func_226()
{
    return Global_1312853;
}

void func_227(int iParam0)
{
    var uVar0;
    var uVar1;
    
    uVar0 = Global_104439.f_13912[iParam0 /*20*/].f_8;
    uVar0 = uVar0;
    uVar1 = uVar1;
}

void func_228(int iParam0)
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    int iVar5;
    
    iVar0 = unk_0x6676AD594A1E113E();
    iVar1 = unk_0xE647A8424B4399CE();
    iVar2 = unk_0x41413FABD538FC3A();
    iVar3 = unk_0xEC3E0DDCEEBF8A00();
    uVar4 = unk_0x1A7BD52C0A88E679() + 1;
    iVar5 = unk_0x760D3328FB0F48C5();
    Global_2606877[iParam0 /*104*/].f_18 = iVar0;
    Global_2606877[iParam0 /*104*/].f_18.f_1 = iVar1;
    Global_2606877[iParam0 /*104*/].f_18.f_2 = iVar2;
    Global_2606877[iParam0 /*104*/].f_18.f_3 = iVar3;
    Global_2606877[iParam0 /*104*/].f_18.f_4 = uVar4;
    Global_2606877[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_229()
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    iVar1 = 10;
    iVar2 = iVar0;
    Global_2608126 = 11;
    Global_2606877[Global_2608126 /*104*/].f_18 = -1;
    Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
    while (iVar2 < iVar1)
    {
        if (!func_230(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
        {
            Global_2608126 = iVar2;
        }
        iVar2++;
    }
    Global_2606877[Global_2608126 /*104*/].f_24 = 1;
}

int func_230(struct<6> Param0, struct<6> Param1)
{
    struct<4> Var0;
    struct<4> Var1;
    int iVar2;
    int iVar3;
    
    if (Param0.f_5 < Param1.f_5)
    {
        return 0;
    }
    if (Param0.f_5 > Param1.f_5)
    {
        return 1;
    }
    if (Param0.f_5 == Param1.f_5)
    {
        if (Param0.f_4 < Param1.f_4)
        {
            return 0;
        }
        if (Param0.f_4 > Param1.f_4)
        {
            return 1;
        }
        if (Param0.f_4 == Param1.f_4)
        {
            Var0 = Param0;
            Var0.f_1 = Param0.f_1 * 60;
            Var0.f_2 = Param0.f_2 * 3600;
            Var0.f_3 = (Param0.f_3 * 86400);
            iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
            Var1 = Param1;
            Var1.f_1 = Param1.f_1 * 60;
            Var1.f_2 = Param1.f_2 * 3600;
            Var1.f_3 = (Param1.f_3 * 86400);
            iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
            if (iVar2 > iVar3 || iVar2 == iVar3)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

int func_231()
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    iVar0 = 0;
    iVar1 = 10;
    iVar2 = iVar0;
    while (iVar2 < iVar1)
    {
        if (Global_2606877[iVar2 /*104*/].f_24 == 0)
        {
            Global_2608126 = iVar2;
            return 1;
        }
        iVar2++;
    }
    iVar2 = iVar0;
    Global_2608126 = 11;
    Global_2606877[Global_2608126 /*104*/].f_18 = -1;
    Global_2606877[Global_2608126 /*104*/].f_18.f_1 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_2 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_3 = 0;
    Global_2606877[Global_2608126 /*104*/].f_18.f_5 = 99999;
    while (iVar2 < iVar1)
    {
        if (Global_2606877[iVar2 /*104*/].f_24 == 0 || Global_2606877[iVar2 /*104*/].f_24 == 1)
        {
            if (!func_230(Global_2606877[iVar2 /*104*/].f_18, Global_2606877[Global_2608126 /*104*/].f_18))
            {
                Global_2608126 = iVar2;
            }
        }
        iVar2++;
    }
    if (Global_2608126 == 11)
    {
        return 0;
    }
    Global_2606877[Global_2608126 /*104*/].f_99[0] = 0;
    Global_2606877[Global_2608126 /*104*/].f_99[1] = 0;
    Global_2606877[Global_2608126 /*104*/].f_99[2] = 0;
    return 1;
}

void func_232()
{
    if (func_186(14))
    {
        if (!unk_0x7A6C051038031EFA(unk_0x0031992CA618A445(), 0))
        {
            if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[0 /*29*/])
            {
                Global_14443 = 0;
            }
            else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[1 /*29*/])
            {
                Global_14443 = 1;
            }
            else if (unk_0xE9559A12052415BE(unk_0x0031992CA618A445()) == Global_104439.f_27911[2 /*29*/])
            {
                Global_14443 = 2;
            }
            else
            {
                Global_14443 = 0;
            }
        }
    }
    else
    {
        Global_14443 = func_233();
        if (Global_14443 == 145)
        {
            Global_14443 = 3;
        }
        if (Global_70785)
        {
            Global_14443 = 3;
        }
        if (Global_14443 > 3)
        {
            Global_14443 = 3;
        }
    }
}

var func_233()
{
    func_234();
    return Global_104439.f_2244.f_539.f_4301;
}

void func_234()
{
    int iVar0;
    
    if (unk_0x76B3C79DE564AFC6(unk_0x0031992CA618A445()))
    {
        if (func_237(Global_104439.f_2244.f_539.f_4301) != unk_0xE9559A12052415BE(unk_0x0031992CA618A445()))
        {
            iVar0 = func_236(unk_0x0031992CA618A445());
            if (func_235(iVar0) && (!func_186(14) || Global_103390))
            {
                if (Global_104439.f_2244.f_539.f_4301 != iVar0 && func_235(Global_104439.f_2244.f_539.f_4301))
                {
                    Global_104439.f_2244.f_539.f_4302 = Global_104439.f_2244.f_539.f_4301;
                }
                Global_104439.f_2244.f_539.f_4303 = iVar0;
                Global_104439.f_2244.f_539.f_4301 = iVar0;
                return;
            }
        }
        else
        {
            if (Global_104439.f_2244.f_539.f_4301 != 145)
            {
                Global_104439.f_2244.f_539.f_4303 = Global_104439.f_2244.f_539.f_4301;
            }
            return;
        }
    }
    Global_104439.f_2244.f_539.f_4301 = 145;
}

bool func_235(int iParam0)
{
    return iParam0 < 3;
}

int func_236(int iParam0)
{
    int iVar0;
    int iVar1;
    
    if (unk_0x76B3C79DE564AFC6(iParam0))
    {
        iVar1 = unk_0xE9559A12052415BE(iParam0);
        iVar0 = 0;
        while (iVar0 <= 2)
        {
            if (func_237(iVar0) == iVar1)
            {
                return iVar0;
            }
            iVar0++;
        }
    }
    return 145;
}

int func_237(int iParam0)
{
    if (func_235(iParam0))
    {
        return Global_104439.f_27911[iParam0 /*29*/];
    }
    else if (iParam0 != 145)
    {
    }
    return 0;
}

int func_238(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
    int iVar0;
    
    switch (iParam14)
    {
        case 0:
            sParam15 = "NULL";
            sParam16 = "NULL";
            break;
        
        case 1:
            sParam16 = "NULL";
            break;
        
        case 2:
            break;
        
        default:
            break;
    }
    iVar0 = 3;
    if (func_225(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
    {
        if (bParam11 == 1)
        {
            Global_3020 = iParam10;
            unk_0xCD7E92DE2BFA0B0D(&Global_2608142, 0);
        }
        return 1;
    }
    return 0;
}

int func_239(int iParam0, int iParam1)
{
    if (iParam0 == -99)
    {
        return -99;
    }
    func_240(2, iParam1);
    return iParam0;
}

void func_240(int iParam0, var uParam1)
{
    bool bVar0;
    bool bVar1;
    
    if (iParam0 == 0)
    {
        return;
    }
    bVar0 = false;
    bVar1 = false;
    switch (iParam0)
    {
        case 1:
            bVar0 = true;
            break;
        
        case 2:
            bVar1 = true;
            break;
        
        default:
            return;
    }
    if (bVar0)
    {
        switch (*uParam1)
        {
            case 1:
            case 3:
                break;
            
            case 0:
                *uParam1 = 1;
                break;
            
            case 2:
                *uParam1 = 3;
                break;
            
            default:
                return;
        }
        return;
    }
    if (bVar1)
    {
        switch (*uParam1)
        {
            case 2:
            case 3:
                break;
            
            case 0:
                *uParam1 = 2;
                break;
            
            case 1:
                *uParam1 = 3;
                break;
            
            default:
                return;
        }
        return;
    }
}

char* func_241(char* sParam0, bool bParam1, int iParam2)
{
    if (unk_0x0BD3CCFB6C6CFA91(sParam0))
    {
        return sLocal_18;
    }
    if (unk_0xB3404E397FF56B3B(sParam0, sLocal_18))
    {
        return sLocal_18;
    }
    func_240(1, iParam2);
    if (bParam1)
    {
        return sParam0;
    }
    return unk_0xC0D54565FC1032F4(sParam0);
}

int func_242(int iParam0)
{
    int iVar0;
    
    iVar0 = func_245(iParam0);
    if (iVar0 == -1)
    {
        func_243(iParam0, 1);
        return 0;
    }
    Global_1365860[iVar0 /*5*/].f_4 = 1;
    return Global_1365860[iVar0 /*5*/].f_2;
}

void func_243(int iParam0, bool bParam1)
{
    if (!func_346(iParam0, 0, 1))
    {
        return;
    }
    if (func_245(iParam0) != -1)
    {
        return;
    }
    if (Global_1366023)
    {
        if (iParam0 == Global_1366023.f_1)
        {
            return;
        }
    }
    if (func_244(iParam0))
    {
        return;
    }
    if (Global_1366061 >= 32)
    {
        return;
    }
    Global_1366028[Global_1366061] = iParam0;
    Global_1366061++;
    if (bParam1)
    {
    }
}

int func_244(int iParam0)
{
    int iVar0;
    
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1366061)
    {
        if (Global_1366028[iVar0] == iParam0)
        {
            return 1;
        }
        iVar0++;
    }
    return 0;
}

int func_245(int iParam0)
{
    int iVar0;
    
    if (!func_346(iParam0, 0, 1))
    {
        return -1;
    }
    if (Global_1366021 == 0)
    {
        return -1;
    }
    iVar0 = 0;
    iVar0 = 0;
    while (iVar0 < Global_1366021)
    {
        if (Global_1365860[iVar0 /*5*/].f_1 == iParam0)
        {
            if (unk_0x1F20678A3517FA33(Global_1365860[iVar0 /*5*/].f_2) && unk_0x484948706DA7FDE0(Global_1365860[iVar0 /*5*/].f_2))
            {
                return iVar0;
            }
            func_246(iVar0);
            return -1;
        }
        iVar0++;
    }
    return -1;
}

void func_246(int iParam0)
{
    char cVar0[64];
    char cVar1[64];
    int iVar2;
    int iVar3;
    
    if (iParam0 >= Global_1366021)
    {
        return;
    }
    if (unk_0x1F20678A3517FA33(Global_1365860[iParam0 /*5*/].f_2))
    {
        StringCopy(&cVar0, "CHAR_DEFAULT", 64);
        if (Global_1365860[iParam0 /*5*/].f_2 != 0)
        {
            StringCopy(&cVar1, unk_0x7EBBB7725601519D(Global_1365860[iParam0 /*5*/].f_2), 64);
            unk_0x24EBBC5B25484B08(&cVar1, &cVar1, &cVar0, &cVar0);
        }
        unk_0x3597EC3F7CA70174(Global_1365860[iParam0 /*5*/].f_2);
    }
    iVar2 = iParam0;
    iVar3 = iVar2 + 1;
    while (iVar3 < Global_1366021)
    {
        Global_1365860[iVar2 /*5*/] = { Global_1365860[iVar3 /*5*/] };
        iVar2++;
        iVar3++;
    }
    func_247(&(Global_1365860[iVar2 /*5*/]));
    Global_1366021 = (Global_1366021 - 1);
}

void func_247(var uParam0)
{
    *uParam0 = 0;
    uParam0->f_1 = func_59();
    uParam0->f_2 = 0;
    uParam0->f_4 = 0;
    if (unk_0x27CA09C6DFAB1E79())
    {
        uParam0->f_3 = unk_0x898811EA80D35DE2();
    }
}

void func_248()
{
    Global_1348168.f_40.f_9 = 4;
}

int func_249(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
    bool bVar0;
    
    func_248();
    bVar0 = false;
    return func_220(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_250(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
    bool bVar0;
    
    bVar0 = false;
    return func_251(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_251(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
    int iVar0;
    int iVar1;
    char* sVar2;
    int iVar3;
    char* sVar4;
    var uVar5;
    int iVar6;
    bool bVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    bool bVar12;
    
    iVar0 = func_59();
    iVar1 = 0;
    if (iParam0 == 145)
    {
        iVar0 = iParam1;
        sVar2 = unk_0x06D7899D9C1F422F(iVar0);
        iVar1 = func_242(iVar0);
        if (iVar1 == 0)
        {
            if (unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1348168.f_40.f_13))
            {
                return 0;
            }
        }
        Global_16806 = iVar1;
    }
    else
    {
        sVar2 = "";
    }
    iVar3 = 0;
    sVar4 = func_241(sParam5, bParam6, &iVar3);
    uVar5 = func_239(iParam7, &iVar3);
    iVar6 = 0;
    if (!unk_0x0BD3CCFB6C6CFA91(sParam8))
    {
        iVar6++;
        if (!unk_0x0BD3CCFB6C6CFA91(sParam9))
        {
            iVar6++;
        }
    }
    if (unk_0xB3404E397FF56B3B(sVar4, " "))
    {
        sVar4 = "";
    }
    bVar7 = true;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 1;
    iVar11 = 0;
    if (bParam3)
    {
        iVar9 = 1;
        iVar10 = 2;
        iVar11 = 1;
        if (unk_0x2A3398C6222EB190(iParam4, 1))
        {
            iVar8 = 1;
        }
    }
    if (unk_0x2A3398C6222EB190(iParam4, 2))
    {
        iVar10 = 2;
    }
    bVar12 = false;
    if (!iVar3 == 0 || !unk_0x0BD3CCFB6C6CFA91(sVar2))
    {
        bVar12 = func_259(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
    }
    else
    {
        bVar12 = func_253(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
    }
    if (!bVar12)
    {
        return 0;
    }
    if (unk_0x2A3398C6222EB190(iParam4, 0))
    {
        func_223();
    }
    func_252();
    func_222();
    func_221();
    return 1;
}

void func_252()
{
    Global_1348168.f_40.f_9 = 3;
}

int func_253(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
    int iVar0;
    char* sVar1;
    int iVar2;
    char* sVar3;
    int iVar4;
    char* sVar5;
    char* sVar6;
    int iVar7;
    
    unk_0xD804ACF2A7171150(&Global_2313, 10);
    iVar0 = 0;
    sVar1 = "NULL";
    iVar2 = -99;
    sVar3 = "NULL";
    iVar4 = 0;
    sVar5 = "NULL";
    sVar6 = "NULL";
    iVar7 = 3;
    if (func_254(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
    {
        if (bParam7 == 1)
        {
            Global_3020 = iParam6;
            Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
            Global_3000 = iParam0;
            unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
            unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
        }
        return 1;
    }
    return 0;
}

int func_254(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
    int iVar0;
    
    if (iParam13 > 99)
    {
    }
    if (unk_0xB3404E397FF56B3B(sParam14, sParam15))
    {
    }
    func_232();
    iVar0 = 0;
    switch (iParam16)
    {
        case 0:
            if (Global_14443 == 0)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        case 2:
            if (Global_14443 == 2)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        case 1:
            if (Global_14443 == 1)
            {
                iVar0 = 0;
            }
            else
            {
                iVar0 = 1;
            }
            break;
        
        default:
            iVar0 = 0;
            break;
    }
    if (iVar0 == 0)
    {
        if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
        {
            if (unk_0x7863191A61EF8E4A(unk_0x0031992CA618A445()))
            {
                return 0;
            }
        }
        if (Global_104439.f_13912[Global_14443 /*20*/].f_17 == 1)
        {
            return 0;
        }
        if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
        {
            return 0;
        }
        if (unk_0x7832F791572D5809(joaat("apptextmessage")) > 0)
        {
            return 0;
        }
    }
    if (func_258() == 0)
    {
        func_256();
        return 0;
    }
    func_255(Global_16812);
    StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/]), sParam1, 64);
    Global_104439.f_14002[Global_16812 /*104*/].f_17 = uParam0;
    if (iParam2 == 0)
    {
    }
    else
    {
        Global_104439.f_14002[Global_16812 /*104*/].f_24 = iParam2;
    }
    Global_104439.f_14002[Global_16812 /*104*/].f_25 = iParam7;
    Global_104439.f_14002[Global_16812 /*104*/].f_26 = uParam8;
    Global_104439.f_14002[Global_16812 /*104*/].f_29 = uParam9;
    Global_104439.f_14002[Global_16812 /*104*/].f_30 = uParam12;
    Global_104439.f_14002[Global_16812 /*104*/].f_31 = uParam11;
    Global_104439.f_14002[Global_16812 /*104*/].f_28 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_32 = iParam3;
    StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_33), sParam4, 64);
    Global_104439.f_14002[Global_16812 /*104*/].f_49 = iParam6;
    StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_50), sParam5, 64);
    Global_104439.f_14002[Global_16812 /*104*/].f_66 = iParam13;
    StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_67), sParam14, 64);
    StringCopy(&(Global_104439.f_14002[Global_16812 /*104*/].f_83), sParam15, 64);
    if (unk_0x2A3398C6222EB190(Global_2313, 10))
    {
        Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
        Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
        Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
        Global_3019 = 4;
        func_227(0);
        func_227(2);
        func_227(1);
    }
    else
    {
        func_232();
        switch (iParam16)
        {
            case 3:
                Global_104439.f_14002[Global_16812 /*104*/].f_99[Global_14443] = 1;
                break;
            
            case 0:
                Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 1;
                break;
            
            case 2:
                Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 1;
                break;
            
            case 1:
                Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 1;
                break;
        }
        if (iParam16 == 3)
        {
            switch (Global_14443)
            {
                case 0:
                    func_227(0);
                    Global_3019 = 0;
                    break;
                
                case 1:
                    func_227(1);
                    Global_3019 = 1;
                    break;
                
                case 2:
                    func_227(2);
                    Global_3019 = 2;
                    break;
                
                case 3:
                    func_227(3);
                    Global_3019 = 3;
                    break;
                
                default:
                    Global_3019 = 4;
                    break;
                }
            }
    }
    if (iParam7 == 1)
    {
        if (unk_0x2A3398C6222EB190(Global_2313, 10))
        {
            Global_104439.f_13912[0 /*20*/].f_17 = 1;
            Global_104439.f_13912[1 /*20*/].f_17 = 1;
            Global_104439.f_13912[2 /*20*/].f_17 = 1;
        }
        else
        {
            switch (iParam16)
            {
                case 3:
                    Global_104439.f_13912[Global_14443 /*20*/].f_17 = 1;
                    break;
                
                case 0:
                    Global_104439.f_13912[0 /*20*/].f_17 = 1;
                    break;
                
                case 2:
                    Global_104439.f_13912[2 /*20*/].f_17 = 1;
                    break;
                
                case 1:
                    Global_104439.f_13912[1 /*20*/].f_17 = 1;
                    break;
                }
            }
    }
    Global_16814[Global_16812] = 0;
    if (bParam10)
    {
        func_232();
        if (Global_14386)
        {
            StringCopy(&Global_14432, "Phone_SoundSet_Prologue", 24);
        }
        else
        {
            switch (Global_14443)
            {
                case 0:
                    StringCopy(&Global_14432, "Phone_SoundSet_Michael", 24);
                    break;
                
                case 2:
                    StringCopy(&Global_14432, "Phone_SoundSet_Trevor", 24);
                    break;
                
                case 1:
                    StringCopy(&Global_14432, "Phone_SoundSet_Franklin", 24);
                    break;
                
                default:
                    StringCopy(&Global_14432, "Phone_SoundSet_Default", 24);
                    break;
                }
        }
        if (!Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 1)
        {
            if (!func_226())
            {
                unk_0x18F1BFAF88AC511B(-1, "Text_Arrive_Tone", &Global_14432, 1);
            }
        }
    }
    if (!Global_14605)
    {
        if (Global_14443.f_1 == 6)
        {
            func_187(Global_14424, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
            func_183(1);
            func_187(Global_14424, "DISPLAY_VIEW", 1f, to_float(Global_14423), -1082130432, -1082130432, -1082130432);
        }
    }
    return 1;
}

void func_255(int iParam0)
{
    int iVar0;
    int iVar1;
    int iVar2;
    int iVar3;
    var uVar4;
    int iVar5;
    
    iVar0 = unk_0x6676AD594A1E113E();
    iVar1 = unk_0xE647A8424B4399CE();
    iVar2 = unk_0x41413FABD538FC3A();
    iVar3 = unk_0xEC3E0DDCEEBF8A00();
    uVar4 = unk_0x1A7BD52C0A88E679() + 1;
    iVar5 = unk_0x760D3328FB0F48C5();
    Global_104439.f_14002[iParam0 /*104*/].f_18 = iVar0;
    Global_104439.f_14002[iParam0 /*104*/].f_18.f_1 = iVar1;
    Global_104439.f_14002[iParam0 /*104*/].f_18.f_2 = iVar2;
    Global_104439.f_14002[iParam0 /*104*/].f_18.f_3 = iVar3;
    Global_104439.f_14002[iParam0 /*104*/].f_18.f_4 = uVar4;
    Global_104439.f_14002[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_256()
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (Global_70785)
    {
        iVar0 = 24;
        iVar1 = 33;
    }
    else
    {
        iVar0 = 0;
        iVar1 = 20;
    }
    iVar2 = iVar0;
    Global_16812 = 34;
    Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
    while (iVar2 < iVar1)
    {
        if (!func_257(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
        {
            Global_16812 = iVar2;
        }
        iVar2++;
    }
    Global_104439.f_14002[Global_16812 /*104*/].f_24 = 1;
}

int func_257(struct<6> Param0, struct<6> Param1)
{
    struct<4> Var0;
    struct<4> Var1;
    int iVar2;
    int iVar3;
    
    if (Param0.f_5 < Param1.f_5)
    {
        return 0;
    }
    if (Param0.f_5 > Param1.f_5)
    {
        return 1;
    }
    if (Param0.f_5 == Param1.f_5)
    {
        if (Param0.f_4 < Param1.f_4)
        {
            return 0;
        }
        if (Param0.f_4 > Param1.f_4)
        {
            return 1;
        }
        if (Param0.f_4 == Param1.f_4)
        {
            Var0 = Param0;
            Var0.f_1 = Param0.f_1 * 60;
            Var0.f_2 = Param0.f_2 * 3600;
            Var0.f_3 = (Param0.f_3 * 86400);
            iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
            Var1 = Param1;
            Var1.f_1 = Param1.f_1 * 60;
            Var1.f_2 = Param1.f_2 * 3600;
            Var1.f_3 = (Param1.f_3 * 86400);
            iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
            if (iVar2 > iVar3 || iVar2 == iVar3)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
    }
    return 0;
}

int func_258()
{
    int iVar0;
    int iVar1;
    int iVar2;
    
    if (Global_70785)
    {
        iVar0 = 24;
        iVar1 = 33;
    }
    else
    {
        iVar0 = 0;
        iVar1 = 20;
    }
    iVar2 = iVar0;
    while (iVar2 < iVar1)
    {
        if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0)
        {
            Global_16812 = iVar2;
            return 1;
        }
        iVar2++;
    }
    iVar2 = iVar0;
    Global_16812 = 34;
    Global_104439.f_14002[Global_16812 /*104*/].f_18 = -1;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_1 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_2 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_3 = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_18.f_5 = 99999;
    while (iVar2 < iVar1)
    {
        if (Global_104439.f_14002[iVar2 /*104*/].f_24 == 0 || Global_104439.f_14002[iVar2 /*104*/].f_24 == 1)
        {
            if (!func_257(Global_104439.f_14002[iVar2 /*104*/].f_18, Global_104439.f_14002[Global_16812 /*104*/].f_18))
            {
                Global_16812 = iVar2;
            }
        }
        iVar2++;
    }
    if (Global_16812 == 34)
    {
        return 0;
    }
    Global_104439.f_14002[Global_16812 /*104*/].f_99[0] = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_99[1] = 0;
    Global_104439.f_14002[Global_16812 /*104*/].f_99[2] = 0;
    return 1;
}

int func_259(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
    int iVar0;
    
    switch (iParam14)
    {
        case 0:
            sParam15 = "NULL";
            sParam16 = "NULL";
            break;
        
        case 1:
            sParam16 = "NULL";
            break;
        
        case 2:
            break;
        
        default:
            break;
    }
    unk_0xD804ACF2A7171150(&Global_2313, 10);
    iVar0 = 3;
    if (func_254(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
    {
        if (bParam11 == 1)
        {
            Global_3020 = iParam10;
            Global_2923[3 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
            Global_3000 = iParam0;
            StringCopy(&Global_3001, sParam5, 64);
            unk_0xCD7E92DE2BFA0B0D(&Global_2313, 1);
            unk_0xCD7E92DE2BFA0B0D(&Global_2313, 7);
        }
        return 1;
    }
    return 0;
}

int func_260(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
    bool bVar0;
    
    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
    {
    }
    if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
    {
        return 0;
    }
    func_252();
    bVar0 = true;
    if (func_251(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
    {
        func_219(120000);
        return 1;
    }
    return 0;
}

int func_261(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
    bool bVar0;
    int iVar1;
    
    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
    {
        if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
        {
            return 0;
        }
    }
    bVar0 = false;
    iVar1 = 12;
    if (unk_0x2A3398C6222EB190(iParam4, 7))
    {
        iVar1 = 9;
    }
    if (unk_0x2A3398C6222EB190(iParam4, 4))
    {
        bVar0 = func_276(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
    }
    else
    {
        bVar0 = func_267(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
    }
    if (bVar0)
    {
        if (unk_0x2A3398C6222EB190(iParam4, 3))
        {
            func_266(1);
        }
        if (unk_0x2A3398C6222EB190(iParam4, 5))
        {
            func_265(1);
        }
        func_264();
        func_222();
        func_263();
        func_262();
        return 1;
    }
    return 0;
}

void func_262()
{
    Global_2510108 = 0;
}

void func_263()
{
    Global_1348168.f_57 = 1;
    Global_1348168.f_57.f_1 = 0;
}

void func_264()
{
    Global_1348168.f_40.f_9 = 1;
}

void func_265(int iParam0)
{
    if (iParam0 == 1)
    {
        unk_0xCD7E92DE2BFA0B0D(&Global_2315, 0);
    }
    else
    {
        unk_0xD804ACF2A7171150(&Global_2315, 0);
    }
}

void func_266(int iParam0)
{
    if (iParam0 == 1)
    {
        unk_0xCD7E92DE2BFA0B0D(&Global_2313, 20);
    }
    else
    {
        unk_0xD804ACF2A7171150(&Global_2313, 20);
    }
}

int func_267(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
    func_275(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
    Global_15793 = 0;
    Global_15752 = 1;
    Global_15759 = 0;
    Global_15754 = 0;
    Global_16736 = 0;
    Global_16738 = 0;
    Global_16742 = 0;
    Global_15750 = 0;
    Global_15797 = 0;
    Global_15799 = 0;
    Global_2621441 = 0;
    return func_268(sParam3, iParam4, bParam7);
}

int func_268(char* sParam0, int iParam1, bool bParam2)
{
    Global_15746 = 0;
    if (Global_15745 == 0 || Global_15747 == 2)
    {
        if (Global_15745 != 0)
        {
            if (iParam1 > Global_15747)
            {
                if (Global_15752 == 0)
                {
                    unk_0x683F0CB6CA4C99D0(0);
                    Global_14443.f_1 = 3;
                    Global_15745 = 0;
                    Global_15746 = 1;
                    Global_15798 = 0;
                    Global_15741 = 0;
                    Global_15742 = 0;
                    Global_15756 = 0;
                    Global_15755 = 0;
                    Global_14442 = 0;
                }
                else
                {
                    func_274();
                    return 0;
                }
            }
            else
            {
                return 0;
            }
        }
        if (unk_0x0065EA0CBFB686EA())
        {
            return 0;
        }
        if (func_305(8, -1))
        {
            return 0;
        }
        Global_15821 = { Global_15815 };
        func_273();
        Global_15034 = { Global_15199 };
        Global_15751 = Global_15752;
        Global_15758 = Global_15759;
        Global_2621442 = Global_2621441;
        Global_15760 = { Global_15776 };
        Global_15753 = Global_15754;
        Global_16735 = Global_16736;
        Global_16743 = { Global_16749 };
        Global_16737 = Global_16738;
        Global_16739 = Global_16740;
        Global_16741 = Global_16742;
        Global_15364.f_370 = Global_16734;
        Global_15364.f_368 = Global_16732;
        Global_15364.f_369 = Global_16733;
        Global_15741 = Global_15742;
        if (Global_15751)
        {
            unk_0xD804ACF2A7171150(&Global_2313, 20);
            unk_0xD804ACF2A7171150(&Global_2314, 17);
            unk_0xD804ACF2A7171150(&Global_2315, 0);
            if (bParam2)
            {
                func_232();
                if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2)
                {
                    if (iParam1 == 13)
                    {
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (Global_14443.f_1 > 3)
                {
                    return 0;
                }
            }
            if (Global_14409 == 1)
            {
                return 0;
            }
            if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
            {
                if (unk_0xAE94A7B1ED25B103(unk_0x0031992CA618A445()))
                {
                    return 0;
                }
                if (func_272())
                {
                    return 0;
                }
                if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
                {
                    return 0;
                }
                if (unk_0xABB40063444DEDAA(unk_0x0031992CA618A445()))
                {
                    return 0;
                }
                if (unk_0x01A6FADA5CA10AE3(unk_0x0031992CA618A445()))
                {
                    return 0;
                }
                if (unk_0xC3061CDBCFB63D2A(unk_0x0031992CA618A445(), joaat("gadget_parachute")))
                {
                    return 0;
                }
                if (!Global_70785)
                {
                    if (unk_0x7019CC495F72B3AC(unk_0x0031992CA618A445()))
                    {
                        return 0;
                    }
                    if (unk_0xF051C6E3C785E88E(unk_0x3D35F9864E4640B1()))
                    {
                        return 0;
                    }
                    if (unk_0x4409826A2E8B7CC7(unk_0x0031992CA618A445()))
                    {
                        return 0;
                    }
                    if (unk_0x2774AF2DE7B6C005(unk_0x3D35F9864E4640B1()))
                    {
                        return 0;
                    }
                }
            }
            if (func_271())
            {
                return 0;
            }
            else
            {
                switch (Global_14443.f_1)
                {
                    case 7:
                        return 0;
                        break;
                    
                    case 8:
                        return 0;
                        break;
                    
                    case 9:
                        break;
                    
                    case 10:
                        break;
                    
                    default:
                        break;
                }
                if (unk_0x2A3398C6222EB190(Global_2313, 9))
                {
                    return 0;
                }
            }
            func_270();
            Global_15755 = bParam2;
        }
        Global_15747 = iParam1;
        StringCopy(&Global_15364, sParam0, 24);
        Global_14611 = 0;
        func_269();
        return 1;
    }
    if (Global_15745 == 5)
    {
        return 0;
    }
    if (iParam1 < Global_15747 || iParam1 == Global_15747)
    {
        return 0;
    }
    if (iParam1 == 2)
    {
    }
    else
    {
        func_274();
    }
    return 0;
}

void func_269()
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 69)
    {
        StringCopy(&(Global_14613[iVar0 /*6*/]), "", 24);
        iVar0++;
    }
    unk_0x683F0CB6CA4C99D0(0);
    Global_15745 = 1;
}

void func_270()
{
    Global_15798 = Global_15797;
    Global_15792 = Global_15793;
    Global_15839 = { Global_15827 };
    Global_15845 = { Global_15833 };
    Global_15800 = Global_15799;
    Global_15869 = { Global_15851 };
    Global_15875 = { Global_15857 };
    Global_15881 = { Global_15863 };
    Global_15887 = { Global_15893 };
    Global_1628 = Global_1629;
    Global_1630 = Global_1631;
    Global_15756 = Global_15757;
    Global_15758 = Global_15759;
    Global_15760 = { Global_15776 };
    Global_15749 = Global_15750;
    Global_16761 = 0;
    Global_15794 = 0;
    Global_15795 = 0;
    unk_0xD804ACF2A7171150(&Global_2314, 16);
}

int func_271()
{
    if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0)
    {
        return 1;
    }
    return 0;
}

int func_272()
{
    int iVar0;
    int iVar1;
    
    if (Global_70785)
    {
        iVar0 = 0;
        unk_0x1306828A757A10AC(unk_0x0031992CA618A445(), &iVar1, 1);
        if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
        {
            if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
            {
                iVar0 = 1;
            }
        }
        if (unk_0x5DA901F6AE7EB392() && iVar0 == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (unk_0x4B0365EB2D59E6FA(unk_0x3D35F9864E4640B1()))
    {
        if (unk_0x185D897EBE6F16F4(unk_0x0031992CA618A445(), 78, 1))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void func_273()
{
    int iVar0;
    
    iVar0 = 0;
    while (iVar0 <= 15)
    {
        Global_15034[iVar0 /*10*/] = 0;
        StringCopy(&(Global_15034[iVar0 /*10*/].f_1), "", 24);
        Global_15034[iVar0 /*10*/].f_7 = 0;
        Global_15034[iVar0 /*10*/].f_8 = 0;
        iVar0++;
    }
    Global_15034.f_161 = -99;
    Global_15034.f_162 = { 0f, 0f, 0f };
}

void func_274()
{
    unk_0x8C8894B8C4CFE97F();
    Global_16756 = 0;
    if ((unk_0xCAD6D8C85D0F329B() || Global_14443.f_1 == 9) || Global_14442 == 1)
    {
        unk_0x683F0CB6CA4C99D0(0);
        Global_15745 = 6;
        Global_14443.f_1 = 3;
        return;
    }
    if (unk_0x0065EA0CBFB686EA())
    {
        unk_0x683F0CB6CA4C99D0(1);
        Global_15745 = 6;
        return;
    }
}

void func_275(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
    Global_15199 = { *uParam0 };
    Global_1629 = iParam1;
    StringCopy(&Global_15815, sParam2, 24);
    Global_16734 = iParam5;
    if (iParam3 == 0)
    {
        Global_16732 = 1;
        Global_16730 = 0;
    }
    else
    {
        Global_16732 = 0;
        Global_16730 = 1;
    }
    if (iParam4 == 0)
    {
        Global_16733 = 1;
        Global_16731 = 0;
    }
    else
    {
        Global_16733 = 0;
        Global_16731 = 1;
    }
}

int func_276(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
    func_275(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
    Global_15793 = 1;
    Global_15752 = 1;
    Global_15759 = 0;
    Global_15754 = 0;
    Global_16736 = 0;
    Global_16738 = 0;
    Global_16742 = 0;
    Global_15750 = 0;
    Global_15797 = 0;
    Global_15799 = 0;
    Global_2621441 = 0;
    return func_268(sParam3, iParam4, bParam7);
}

int func_277(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
    {
    }
    if (unk_0xC58D64388B80F64A(unk_0x0031992CA618A445()))
    {
        return 0;
    }
    if (func_279(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
    {
        func_278();
        func_264();
        func_222();
        func_263();
        func_262();
        return 1;
    }
    return 0;
}

void func_278()
{
    Global_16763 = 0;
}

bool func_279(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
    func_275(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
    Global_15793 = 0;
    Global_15752 = 1;
    Global_15759 = 0;
    Global_15754 = 1;
    Global_16736 = 0;
    Global_16738 = 0;
    Global_16742 = 0;
    Global_15750 = 0;
    Global_15797 = 1;
    Global_15799 = 0;
    StringCopy(&Global_15893, sParam5, 24);
    Global_2621441 = 0;
    return func_268(sParam3, iParam4, bParam8);
}

int func_280(var uParam0, char* sParam1, char* sParam2)
{
    if (func_282(uParam0, sParam1, sParam2, 12, 0, 0, 0))
    {
        func_281();
        func_222();
        func_263();
        return 1;
    }
    return 0;
}

void func_281()
{
    Global_1348168.f_40.f_9 = 2;
}

bool func_282(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
    func_275(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
    if (iParam3 > 7)
    {
        if (iParam3 < 12)
        {
            iParam3 = 7;
        }
    }
    Global_15752 = 0;
    Global_15754 = 0;
    Global_15759 = 0;
    Global_16736 = 0;
    Global_16738 = 0;
    Global_16742 = 0;
    Global_2621441 = 0;
    return func_268(sParam2, iParam3, 0);
}

void func_283()
{
    Global_1348168.f_55 = Global_1348168.f_40.f_1;
    Global_1348168.f_55.f_1 = Global_1348168.f_40.f_10;
}

void func_284()
{
    Global_1348168.f_40 = 1;
}

bool func_285()
{
    return Global_1348168.f_40 == 1;
}

int func_286(int iParam0, int iParam1, int iParam2)
{
    if (!func_287(iParam0))
    {
        return 0;
    }
    if (Global_1348168.f_40.f_2 != iParam1)
    {
        return 0;
    }
    if (iParam2 != 0)
    {
        if (Global_1348168.f_40.f_3 != iParam2)
        {
            return 0;
        }
    }
    return 1;
}

int func_287(int iParam0)
{
    if (!func_288())
    {
        return 0;
    }
    if (!Global_1348168.f_40.f_1 == iParam0)
    {
        return 0;
    }
    return 1;
}

int func_288()
{
    if (Global_1348168.f_40 == 0)
    {
        return 0;
    }
    return 1;
}

int func_289(int iParam0)
{
    if (func_293())
    {
        return 0;
    }
    if (func_204())
    {
        return 0;
    }
    if (func_292(0))
    {
        return 0;
    }
    if (Global_1312466.f_18 != 0)
    {
        return 0;
    }
    if (Global_1767039 || func_291())
    {
        return 0;
    }
    if (!unk_0x2A3398C6222EB190(iParam0, 6))
    {
        if (func_290())
        {
            return 0;
        }
    }
    return 1;
}

bool func_290()
{
    return unk_0xBE8EFD00E9670F53(unk_0x898811EA80D35DE2(), Global_1364754);
}

int func_291()
{
    if (Global_2595735.f_797 > -1)
    {
        return 1;
    }
    return 0;
}

int func_292(int iParam0)
{
    if (iParam0 == 1)
    {
        if (Global_14443.f_1 > 3)
        {
            if (unk_0x2A3398C6222EB190(Global_2313, 14))
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            return 0;
        }
    }
    if (unk_0x7832F791572D5809(joaat("cellphone_flashhand")) > 0)
    {
        return 1;
    }
    if (Global_14443.f_1 > 3)
    {
        return 1;
    }
    return 0;
}

bool func_293()
{
    return func_271();
}

int func_294(int iParam0, int iParam1, int iParam2)
{
    if (!func_204())
    {
        return 0;
    }
    return func_286(iParam0, iParam1, iParam2);
}

int func_295(char* sParam0, char* sParam1)
{
    char cVar0[64];
    
    StringCopy(&cVar0, sParam0, 64);
    StringConCat(&cVar0, sParam1, 64);
    return unk_0x50B7853132D8438E(&cVar0);
}

bool func_296()
{
    return Global_2507625.f_1;
}

int func_297()
{
    if (Global_1348356.f_2)
    {
        return 1;
    }
    return func_298();
}

bool func_298()
{
    return func_293();
}

void func_299(int iParam0)
{
    if (!unk_0x2A3398C6222EB190(iLocal_124, 11))
    {
        switch (iParam0)
        {
            case 0:
                sLocal_308 = "FMA_KIL1";
                unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 11);
                break;
            }
    }
}

int func_300(int iParam0)
{
    int iVar0;
    
    iVar0 = 144;
    switch (iParam0)
    {
        case 0:
            iVar0 = 12;
            break;
    }
    return iVar0;
}

void func_301(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            func_303(12, 3, 0);
            func_302(&uLocal_143, 1, 0, "Lester", 0, 1);
            break;
    }
}

void func_302(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
    if ((uParam0[iParam1 /*10*/])->f_7 == 1)
    {
    }
    (*uParam0)[iParam1 /*10*/] = iParam2;
    StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
    (uParam0[iParam1 /*10*/])->f_7 = 1;
    (uParam0[iParam1 /*10*/])->f_8 = iParam4;
    (uParam0[iParam1 /*10*/])->f_9 = iParam5;
    if (!Global_70785)
    {
        if (!unk_0x8682D8A6269E52C9(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_8 == 0)
            {
                unk_0x9C8949CB342B3559(iParam2, 0);
            }
            else
            {
                unk_0x9C8949CB342B3559(iParam2, 1);
            }
        }
        if (!unk_0x8682D8A6269E52C9(iParam2))
        {
            if ((uParam0[iParam1 /*10*/])->f_9 == 0)
            {
                unk_0x82D2A771C96871C8(iParam2, 0);
            }
            else
            {
                unk_0x82D2A771C96871C8(iParam2, 1);
            }
        }
    }
}

void func_303(int iParam0, int iParam1, bool bParam2)
{
    Global_2999 = iParam0;
    if (Global_117[iParam0 /*10*/].f_8 != 140)
    {
        func_232();
        if (iParam1 == 4)
        {
            Global_104439.f_27911[iParam0 /*29*/].f_12[0] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_12[1] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_12[2] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_24[0] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_24[1] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_24[2] = 1;
        }
        else
        {
            if (Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] == 1)
            {
                bParam2 = false;
            }
            Global_104439.f_27911[iParam0 /*29*/].f_12[iParam1] = 1;
            Global_104439.f_27911[iParam0 /*29*/].f_24[iParam1] = 1;
        }
        if (bParam2)
        {
            if (!Global_70785)
            {
                if (iParam1 != 4)
                {
                    if (Global_14443 != iParam1)
                    {
                        Global_2972[iParam1 /*4*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
                        Global_2989[iParam1] = 1;
                        Global_2994[iParam1] = iParam0;
                    }
                    else if (iParam0 == Global_14443)
                    {
                    }
                    else
                    {
                        Global_2923[1 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
                        Global_2923[1 /*6*/].f_5 = iParam1;
                        func_304();
                    }
                }
                else
                {
                    Global_2923[1 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
                    Global_2923[1 /*6*/].f_5 = iParam1;
                    func_304();
                }
            }
            else
            {
                Global_2923[1 /*6*/] = { Global_104439.f_27911[iParam0 /*29*/].f_3 };
                Global_2923[1 /*6*/].f_5 = iParam1;
                func_304();
            }
        }
    }
}

void func_304()
{
    char cVar0[64];
    char cVar1[64];
    char* sVar2;
    
    StringCopy(&cVar0, unk_0xC0D54565FC1032F4(&(Global_104439.f_27911[Global_2999 /*29*/].f_7)), 64);
    if (Global_3018 == 0)
    {
        unk_0xC8EBA5D7FC75C1C0("");
        StringCopy(&cVar1, unk_0xC0D54565FC1032F4(&(Global_2923[1 /*6*/])), 64);
        sVar2 = unk_0xC0D54565FC1032F4("CELL_253");
        unk_0x10DFDE006F19F20F(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
    }
    else
    {
        unk_0xC8EBA5D7FC75C1C0("CELL_255");
        unk_0x7C8A7ECFBAD2C8C4(&(Global_2923[1 /*6*/]));
        unk_0x10DFDE006F19F20F(&cVar0, &cVar0, 0, 3, "", 0);
    }
    unk_0xD804ACF2A7171150(&Global_2313, 0);
}

bool func_305(int iParam0, int iParam1)
{
    switch (iParam0)
    {
        case 5:
            if (iParam1 > -1)
            {
                return Global_1354565.f_203[iParam1];
            }
            break;
    }
    return unk_0x2A3398C6222EB190(Global_1354565.f_1048, iParam0);
}

int func_306(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
    if (iParam2 && unk_0x068C69D0643C4B95())
    {
        return 0;
    }
    if (func_311())
    {
        return 0;
    }
    if (!unk_0xF9FC07CC13402AEF())
    {
        return 0;
    }
    if (func_310())
    {
        return 0;
    }
    if (func_320())
    {
        return 0;
    }
    if (bParam1)
    {
        if (func_46(unk_0x3D35F9864E4640B1(), 1))
        {
            return 0;
        }
    }
    if (bParam0)
    {
        if (func_45(unk_0x3D35F9864E4640B1()))
        {
            return 0;
        }
    }
    if (func_309())
    {
        return 0;
    }
    if (unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
    {
        return 0;
    }
    if (unk_0x957E53BB191CB24D())
    {
        return 0;
    }
    if (bParam3)
    {
        if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
        {
            return 0;
        }
    }
    if (Global_1574109)
    {
        return 0;
    }
    if (func_308())
    {
        return 0;
    }
    if (func_307())
    {
        return 0;
    }
    if (func_318())
    {
        return 0;
    }
    if (Global_68165)
    {
        return 0;
    }
    if (Global_2510592)
    {
        return 0;
    }
    return 1;
}

bool func_307()
{
    return Global_2445582.f_572;
}

bool func_308()
{
    return Global_2445582.f_724;
}

bool func_309()
{
    return Global_2434915.f_2792.f_578;
}

bool func_310()
{
    return unk_0x31CD6E9F83C10233() <= Global_17290.f_5745 + 100;
}

int func_311()
{
    if (Global_15745 != 0 || unk_0x0065EA0CBFB686EA())
    {
        return 1;
    }
    return 0;
}

int func_312()
{
    int iVar0;
    
    iVar0 = Global_1365053[func_141(-1)];
    if (unk_0x2A3398C6222EB190(iVar0, 8))
    {
        return 1;
    }
    return 0;
}

void func_313(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
            {
                Global_2434915.f_3511.f_1[0] = unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]);
            }
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                Global_2434915.f_3511.f_4[0] = unk_0xECB7D3275586261E(Local_116.f_9[0]);
            }
            break;
    }
}

int func_314(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]) && unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                return 1;
            }
            break;
    }
    return 0;
}

void func_315(int iParam0, bool bParam1)
{
    if (bParam1)
    {
        if (!unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217, iParam0))
        {
            unk_0xCD7E92DE2BFA0B0D(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217), iParam0);
        }
    }
    else if (unk_0x2A3398C6222EB190(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217, iParam0))
    {
        unk_0xD804ACF2A7171150(&(Global_2422142[unk_0x3D35F9864E4640B1() /*399*/].f_217), iParam0);
    }
}

int func_316(int iParam0)
{
    if (func_15(iParam0, 0))
    {
        return 1;
    }
    if (func_317())
    {
        if (iParam0 == unk_0x3D35F9864E4640B1())
        {
            return 1;
        }
    }
    if (unk_0x2A3398C6222EB190(Global_2422142[iParam0 /*399*/].f_204, 2))
    {
        return 1;
    }
    return 0;
}

bool func_317()
{
    return unk_0x2A3398C6222EB190(Global_2359302, 3);
}

bool func_318()
{
    return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_189 != 0;
}

int func_319()
{
    return Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_190;
}

bool func_320()
{
    return unk_0x2A3398C6222EB190(Global_1593076[unk_0x3D35F9864E4640B1() /*647*/].f_39.f_18, 0);
}

void func_321(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
    Param0 = 1021925946;
    Param0.f_1 = unk_0x3D35F9864E4640B1();
    if (!iParam13 == 0)
    {
        unk_0xBD257D33BCFA529A(1, &Param0, 14, iParam13);
    }
}

int func_322(int iParam0)
{
    var uVar0;
    int iVar1;
    int iVar2;
    
    iVar1 = 0;
    while (iVar1 < unk_0x32C41AA379415932())
    {
        if (unk_0xA3C5F17FDDF2701D(unk_0xDF6AF3C6DAF25A51(iVar1)))
        {
            iVar2 = unk_0x3F3ED1FF7CF1C641(unk_0xDF6AF3C6DAF25A51(iVar1));
            if (func_346(iVar2, 0, 0))
            {
                if (iVar2 != unk_0x3D35F9864E4640B1() || iParam0)
                {
                    unk_0xCD7E92DE2BFA0B0D(&uVar0, iVar2);
                }
            }
        }
        iVar1++;
    }
    return uVar0;
}

void func_323()
{
    if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 >= 5 && vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6)
    {
        if (unk_0x2A3398C6222EB190(Local_116, 4))
        {
            if (!unk_0x2A3398C6222EB190(iLocal_124, 3))
            {
                if (func_346(Local_116.f_8, 0, 1))
                {
                    func_324("FM_TGDM_KIL", Local_116.f_8, 0, 0, 0, 1, 1, 0);
                }
                unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 3);
            }
        }
    }
}

int func_324(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
    int iVar0;
    int iVar1;
    struct<16> Var2;
    int iVar3;
    int iVar4;
    
    iVar0 = -1;
    iVar1 = unk_0xB5E2A107E006EC7A(iParam1);
    if (unk_0x09C68D317F1B5143(unk_0x3D35F9864E4640B1(), iParam1) || iParam3)
    {
        if (!bParam2)
        {
            StringCopy(&Var2, unk_0x06D7899D9C1F422F(iParam1), 64);
        }
        else
        {
            StringCopy(&Var2, unk_0x06D7899D9C1F422F(iParam1), 64);
        }
        if (unk_0x0BD3CCFB6C6CFA91(&Var2))
        {
        }
        unk_0xC8EBA5D7FC75C1C0(sParam0);
        if ((iVar1 != -1 && unk_0xF4F91CD09D59F42E()) && iVar1 < 4)
        {
            if (Global_1641087.f_92322[iVar1] != -1)
            {
                unk_0xDBB8FCB00B701798(func_105(iVar1, iParam1, 0));
            }
            else
            {
                unk_0xDBB8FCB00B701798(func_84(iParam1, -2, 1, 0));
            }
        }
        else
        {
            unk_0xDBB8FCB00B701798(func_84(iParam1, -2, 1, 0));
        }
        unk_0x50B3C23D0902259F(func_82(&Var2));
        if (!bParam4)
        {
            iVar0 = unk_0xC59BF654690FB5DC(0, 1);
        }
        else
        {
            Global_2488575 = { func_133(iParam1) };
            if (unk_0x7838EB8661A32D68(&Global_2488505, 35, &Global_2488575))
            {
                iVar3 = 0;
                if (unk_0xB3404E397FF56B3B(&(Global_2488505.f_22), "Leader") && Global_2488505.f_30 == 0)
                {
                    iVar3 = 1;
                }
                if (Global_2488505.f_21 > 0)
                {
                    iVar4 = 0;
                }
                else
                {
                    iVar4 = 1;
                }
                if (bParam6)
                {
                    if (bParam7)
                    {
                        Var2 = { func_325(&Var2) };
                    }
                    iVar0 = unk_0xAC2E222FB9C25D52(iVar4, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar3, 0, Global_2488505, &Var2, Global_1314010, Global_1314011, Global_1314012);
                }
                else
                {
                    iVar0 = unk_0xA9762168447BC8F6(iVar4, unk_0xDEB7B1B6D2FD60C2(&Global_2488505, 35), &(Global_2488505.f_17), Global_2488505.f_30, iVar3, 0, Global_2488505, Global_1314010, Global_1314011, Global_1314012);
                }
            }
            else
            {
                iVar0 = unk_0xC59BF654690FB5DC(0, 1);
            }
        }
        func_78(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
    }
    return iVar0;
}

struct<16> func_325(char* sParam0)
{
    struct<16> Var0;
    
    StringCopy(&Var0, "<C>", 64);
    StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
    StringConCat(&Var0, sParam0, 64);
    StringConCat(&Var0, "</C>", 64);
    return Var0;
}

void func_326()
{
    int iVar0;
    
    iVar0 = unk_0x43B24C247F35B6BC();
    if (iLocal_134 != Local_116.f_15)
    {
        iLocal_134 = Local_116.f_15;
        unk_0x79C80114C0FC1BE7(iLocal_134);
    }
    if (iLocal_135 != Local_116.f_16)
    {
        iLocal_135 = Local_116.f_16;
        unk_0x8A4541F891BF3B2B(iLocal_135);
    }
    if (func_346(unk_0x3D35F9864E4640B1(), 0, 1))
    {
        if (!unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 0))
        {
            if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 == 0)
            {
                if (func_319() == 0)
                {
                    unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[iVar0 /*3*/]), 0);
                }
            }
        }
        else if (unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 0))
        {
            if ((func_46(unk_0x3D35F9864E4640B1(), 1) || func_43(unk_0x3D35F9864E4640B1())) || func_319() > 0)
            {
                func_37(&uLocal_125);
                unk_0xD804ACF2A7171150(&(vLocal_121[iVar0 /*3*/]), 0);
            }
            else if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
            {
                if (!unk_0x46F4AE18D5506B08(unk_0x3D35F9864E4640B1()))
                {
                    if (!unk_0x2A3398C6222EB190(iLocal_124, 7))
                    {
                        unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 7);
                        func_334();
                    }
                }
                else if (unk_0x2A3398C6222EB190(iLocal_124, 7))
                {
                    unk_0xD804ACF2A7171150(&iLocal_124, 7);
                    if (!func_44(unk_0x3D35F9864E4640B1(), 0))
                    {
                        func_332();
                    }
                }
            }
        }
        if (!unk_0x2A3398C6222EB190(vLocal_121[iVar0 /*3*/], 3))
        {
            if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 > 3 && vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6)
            {
                if (unk_0x2A3398C6222EB190(Global_2434915.f_3511, 1))
                {
                    unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[iVar0 /*3*/]), 3);
                }
            }
        }
        if (vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 > 3)
        {
            if (!unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 5))
            {
                if (func_331(Local_116.f_5))
                {
                    unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 5);
                }
            }
            else if (!func_331(Local_116.f_5))
            {
                unk_0xD804ACF2A7171150(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 5);
            }
            if (!unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 6))
            {
                if (func_328(Local_116.f_5))
                {
                    unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 6);
                }
            }
            if (!unk_0x2A3398C6222EB190(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/], 8))
            {
                if (func_327())
                {
                    unk_0xCD7E92DE2BFA0B0D(&(vLocal_121[unk_0x43B24C247F35B6BC() /*3*/]), 8);
                }
            }
        }
        if (!unk_0x2A3398C6222EB190(iLocal_124, 13))
        {
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                if (!func_35(Local_116.f_9[0]))
                {
                    unk_0x319A53053E4361E9(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1, 0);
                    unk_0xCD7E92DE2BFA0B0D(&iLocal_124, 13);
                }
            }
        }
    }
}

int func_327()
{
    if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
    {
        if (func_9(Local_116.f_12[0]))
        {
            if (unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), 0, 7000) || unk_0xDECC749CB8B5AAB6(unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), 1, 40000))
            {
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int func_328(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                if (!func_35(Local_116.f_9[0]))
                {
                    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
                    {
                        if (func_329(unk_0xECB7D3275586261E(Local_116.f_9[0])))
                        {
                            return 1;
                        }
                    }
                }
            }
            break;
    }
    return 0;
}

int func_329(int iParam0)
{
    int iVar0;
    int iVar1;
    
    if (unk_0x35992691C50DF43E(unk_0x3D35F9864E4640B1(), iParam0))
    {
        return 1;
    }
    if (unk_0x14D51A9D0DDF4807(unk_0x3D35F9864E4640B1(), iParam0))
    {
        return 1;
    }
    if (func_330())
    {
        if (unk_0x63683B42C74DE9C9(unk_0x3D35F9864E4640B1(), &iVar0))
        {
            if (unk_0x269F274F1955DE87(iVar0))
            {
                iVar1 = unk_0x4849801147A2BA1E(iVar0);
                if (unk_0x76B3C79DE564AFC6(iVar1))
                {
                    if (!unk_0x7A6C051038031EFA(iVar1, 0))
                    {
                        if (unk_0x90219307C9D2728D(iVar1, 0))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

bool func_330()
{
    return Global_1574291;
}

int func_331(int iParam0)
{
    switch (iParam0)
    {
        case 0:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                if (!func_35(Local_116.f_9[0]))
                {
                    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
                    {
                        if (vdist2(unk_0xF177E0DA126D71C8(unk_0x0031992CA618A445(), 1), unk_0xF177E0DA126D71C8(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1)) < 40000f)
                        {
                            return 1;
                        }
                    }
                }
            }
            break;
    }
    return 0;
}

void func_332()
{
    if (!Global_1312567)
    {
        return;
    }
    func_333();
}

void func_333()
{
    Global_1312567 = 0;
    StringCopy(&(Global_1312567.f_1), "", 24);
    Global_1312567.f_7 = 0;
}

void func_334()
{
    Global_1312567 = 1;
    StringCopy(&(Global_1312567.f_1), unk_0x49CAADAD1ABAB70A(), 24);
    Global_1312567.f_7 = unk_0x50B7853132D8438E(&(Global_1312567.f_1));
}

void func_335()
{
    switch (Local_116.f_6)
    {
        case 1:
            if (unk_0xEF0CB8FF125B9F9C())
            {
                if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
                {
                    if (func_9(Local_116.f_12[0]))
                    {
                        if (!func_35(Local_116.f_9[0]))
                        {
                            if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0])))
                            {
                                if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -258271821) != 0)
                                {
                                    unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), 20f, 786603);
                                }
                            }
                        }
                    }
                }
            }
            break;
        
        case 2:
            if (unk_0xEF0CB8FF125B9F9C())
            {
                if (unk_0xAA55DF0CB38F413B(Local_116.f_12[0]))
                {
                    if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
                    {
                        if (func_9(Local_116.f_12[0]))
                        {
                            if (!func_35(Local_116.f_9[0]))
                            {
                                if (unk_0x26D7BF365BA84F9C(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0])))
                                {
                                    if ((unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -258271821) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -258271821) != 0) || unk_0x2A3398C6222EB190(Local_116, 9))
                                    {
                                        unk_0xF48F6EEC1EBEB012(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0xD7E2A160FD5DEEE1(Local_116.f_12[0]), 30f, 786469);
                                        if (unk_0x2A3398C6222EB190(Local_116, 9))
                                        {
                                            unk_0xD804ACF2A7171150(&Local_116, 9);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            break;
        
        case 3:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                if (!func_35(Local_116.f_9[0]))
                {
                    if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -828834893) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), -828834893) != 0)
                    {
                        if (func_339(Local_116.f_9[0]))
                        {
                            if (unk_0xA02DD6B5C8C02298(Local_116.f_9[0]))
                            {
                                unk_0x471E558A661279DE(unk_0xECB7D3275586261E(Local_116.f_9[0]), 0, 0);
                            }
                        }
                    }
                }
            }
            break;
        
        case 4:
            if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
            {
                if (!func_35(Local_116.f_9[0]))
                {
                    if (!unk_0x8682D8A6269E52C9(unk_0x0031992CA618A445()))
                    {
                        if (unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1805844857) != 1 && unk_0xF57D21B49780A7A8(unk_0xECB7D3275586261E(Local_116.f_9[0]), 1805844857) != 0)
                        {
                            if (func_339(Local_116.f_9[0]))
                            {
                                if (unk_0xA02DD6B5C8C02298(Local_116.f_9[0]))
                                {
                                    unk_0x53E150F8F0AD7101(unk_0xECB7D3275586261E(Local_116.f_9[0]), unk_0x0031992CA618A445(), 500f, -1, 0, 1);
                                }
                            }
                        }
                    }
                }
            }
            break;
    }
    if (unk_0xAA55DF0CB38F413B(Local_116.f_9[0]))
    {
        if ((vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 >= 5 && vLocal_121[unk_0x43B24C247F35B6BC() /*3*/].f_2 < 6) && !func_167(unk_0x3D35F9864E4640B1(), 0, 0, 0, 0, 0, 0))
        {
            func_336(Local_116.f_9[0], &Local_136, -1082130432, 0, 1, 0, 0, -1, -1, 1);
        }
        else
        {
            func_57(&Local_136);
        }
    }
}

void func_336(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
    if (unk_0x69DA17666D6E3F5A(uParam0))
    {
        if (func_338())
        {
            Global_2434915 = unk_0x3D35F9864E4640B1();
        }
        if (bParam3)
        {
            func_337(unk_0xECB7D3275586261E(uParam0), iParam1, 1, Global_2434915, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
        }
        else
        {
            func_337(unk_0xECB7D3275586261E(uParam0), iParam1, -1, Global_2434915, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
        }
    }
    else if (unk_0xA761A0B6072010C8(*iParam1))
    {
        func_57(iParam1);
    }
}

int func_337(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
{
    if (iParam3 == 0)
    {
        iParam3 = unk_0xED1168B8D2D313FA();
    }
    if (fParam6 < 0f)
    {
        fParam6 = 100f;
    }
    if (!unk_0x8682D8A6269E52C9(iParam0))
    {
        if (!unk_0x8E124932BCA8337D(iParam0))
        {
            if (iParam8 == -1)
            {
                unk_0xFAE7EEA9EC6C8B59(iParam0, 1);
            }
            else
            {
                unk_0xC1F8D3D339E714E3(iParam0, 1, iParam8);
            }
            uParam1->f_7 = iParam0;
            unk_0xCF88C2F9C02AE277(iParam0, iParam2);
            unk_0x7F39688B4D1E8A5B(iParam0, fParam6);
            if (unk_0xA761A0B6072010C8(*uParam1))
            {
                unk_0xC5B4383DA70A2C1A(*uParam1, 7);
            }
        }
        if (!iParam9 == -1)
        {
            unk_0x042302634EF280A7(iParam0, iParam9);
        }
        unk_0xF856340FF6FF9351(iParam0, iParam4);
        unk_0x0F321108A38FDEEF(iParam0, iParam5);
        *uParam1 = unk_0x92EB201D24EEB65C(iParam0);
        if (!iParam9 == -1)
        {
            if (unk_0xA761A0B6072010C8(*uParam1))
            {
                if (!iParam8 == -1)
                {
                    unk_0xEB934A06DDA5027D(*uParam1, iParam8);
                }
                if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
                {
                    unk_0xA23268A8852A45E8("STRING");
                    if (bParam10)
                    {
                        unk_0x50B3C23D0902259F(sParam7);
                    }
                    else
                    {
                        unk_0x7C8A7ECFBAD2C8C4(sParam7);
                    }
                    unk_0x05064114393805B9(*uParam1);
                }
                unk_0xC5B4383DA70A2C1A(*uParam1, 7);
            }
        }
        if (!unk_0x2A3398C6222EB190(uParam1->f_6, 2))
        {
            if (unk_0xA761A0B6072010C8(*uParam1))
            {
                unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 2);
            }
        }
        if (unk_0x90219307C9D2728D(iParam0, 0))
        {
            uParam1->f_1 = unk_0x44DF128826D07906(iParam0);
            if (!unk_0x2A3398C6222EB190(uParam1->f_6, 3))
            {
                if (unk_0xA761A0B6072010C8(uParam1->f_1))
                {
                    if (!iParam8 == -1)
                    {
                        unk_0xEB934A06DDA5027D(uParam1->f_1, iParam8);
                    }
                    if (!unk_0x0BD3CCFB6C6CFA91(sParam7))
                    {
                        unk_0xA23268A8852A45E8("STRING");
                        if (bParam10)
                        {
                            unk_0x50B3C23D0902259F(sParam7);
                        }
                        else
                        {
                            unk_0x7C8A7ECFBAD2C8C4(sParam7);
                        }
                        unk_0x05064114393805B9(uParam1->f_1);
                    }
                    unk_0xC5B4383DA70A2C1A(uParam1->f_1, 7);
                    unk_0xCD7E92DE2BFA0B0D(&(uParam1->f_6), 3);
                }
            }
            else if (!unk_0xA761A0B6072010C8(uParam1->f_1))
            {
                uParam1->f_1 = 0;
                unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
            }
        }
        else if (unk_0xA761A0B6072010C8(uParam1->f_1))
        {
            uParam1->f_1 = 0;
            unk_0xD804ACF2A7171150(&(uParam1->f_6), 3);
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

bool func_338()
{
    return Global_1312830;
}

int func_339(var uParam0)
{
    if (unk_0x9855654AB6D34651(uParam0))
    {
        return 1;
    }
    if (func_340(uParam0))
    {
        return 1;
    }
    return 0;
}

int func_340(var uParam0)
{
    if (!unk_0xEF0CB8FF125B9F9C())
    {
        return 0;
    }
    if (!unk_0xAA55DF0CB38F413B(uParam0))
    {
        return 0;
    }
    if (func_341(uParam0))
    {
        return 1;
    }
    return 0;
}

int func_341(var uParam0)
{
    if (unk_0x69DA17666D6E3F5A(uParam0))
    {
        unk_0xED8E0F2F3151048A(uParam0);
        return unk_0xA02DD6B5C8C02298(uParam0);
    }
    return 0;
}

int func_342()
{
    return Local_116.f_1;
}

int func_343(int iParam0)
{
    return vLocal_121[iParam0 /*3*/].f_1;
}

void func_344()
{
    func_50();
    func_315(11, 0);
    func_177(12, 116);
    unk_0xD804ACF2A7171150(&(Global_2434915.f_3511), 0);
    unk_0xD804ACF2A7171150(&(Global_2434915.f_3511), 1);
    if (unk_0x27CA09C6DFAB1E79())
    {
        if (unk_0x43B24C247F35B6BC() > -1)
        {
            vLocal_121[unk_0x43B24C247F35B6BC() /*3*/] = 0;
        }
    }
    if (unk_0x27CA09C6DFAB1E79())
    {
        if (unk_0xEF0CB8FF125B9F9C())
        {
            if (unk_0xCFAEF2ECC4A6FB12(Local_116.f_3))
            {
                unk_0x297A5D086880A479(Local_116.f_3);
            }
            Local_116.f_3 = -1;
        }
    }
    if (unk_0xA761A0B6072010C8(Global_1767014))
    {
        unk_0x0C4BDC77192798AE(&Global_1767014);
    }
    unk_0xD804ACF2A7171150(&iLocal_124, 3);
    unk_0xD804ACF2A7171150(&iLocal_124, 4);
    iLocal_123 = 0;
    if (unk_0xA761A0B6072010C8(Local_136))
    {
        unk_0x0C4BDC77192798AE(&Local_136);
    }
    func_345();
}

void func_345()
{
    unk_0xBEE2834559A8897A();
}

int func_346(int iParam0, bool bParam1, bool bParam2)
{
    int iVar0;
    
    iVar0 = iParam0;
    if (iVar0 != -1)
    {
        if (unk_0x80BA8E3CC61A8625(iParam0))
        {
            if (bParam1)
            {
                if (!unk_0x4B0365EB2D59E6FA(iParam0))
                {
                    return 0;
                }
            }
            if (bParam2)
            {
                if (!Global_2434915.f_3[iVar0])
                {
                    return 0;
                }
            }
            return 1;
        }
    }
    return 0;
}

int func_347()
{
    var uVar0;
    
    func_354(&uVar0);
    if (Global_1312830 == 0)
    {
        if (!unk_0x27CA09C6DFAB1E79())
        {
            return 1;
        }
    }
    if (func_353())
    {
        return 1;
    }
    if (Global_2457338)
    {
        return 1;
    }
    if (func_352())
    {
        return 1;
    }
    if (func_351(157))
    {
        if (!func_350())
        {
            return 1;
        }
    }
    if (func_351(155))
    {
        return 1;
    }
    if (!unk_0xE096BC82D913B3DB())
    {
        return 1;
    }
    if (func_348() != 0)
    {
        if (unk_0x7832F791572D5809(func_348()) == 0)
        {
            return 1;
        }
    }
    return 0;
}

int func_348()
{
    switch (func_349())
    {
        case 0:
            return joaat("freemode");
            break;
        
        case 2:
            return joaat("creator");
            break;
    }
    return 0;
}

int func_349()
{
    return Global_25222;
}

bool func_350()
{
    return Global_2445582.f_579;
}

int func_351(int iParam0)
{
    if (unk_0xB2481AAB46462A07(1, iParam0))
    {
        return 1;
    }
    return 0;
}

bool func_352()
{
    return Global_2455114;
}

bool func_353()
{
    return Global_2445582.f_574;
}

void func_354(var uParam0)
{
    int iVar0;
    int iVar1;
    int iVar2;
    vector3 vVar3;
    
    iVar0 = 0;
    while (iVar0 < unk_0xA97A6E008E9CF806(1))
    {
        iVar1 = unk_0x4A1C0E7DCF648DFE(1, iVar0);
        if (iVar1 == 171)
        {
            unk_0x4AE700F97F1781DC(1, iVar0, &iVar2, 2);
            switch (iVar2)
            {
                case -614201546:
                    func_355(iVar0);
                    break;
                
                case 1050640701:
                    unk_0x4AE700F97F1781DC(1, iVar0, &vVar3, 4);
                    if (vVar3.z == -959337465)
                    {
                        *uParam0 = 1;
                    }
                    break;
                }
        }
        iVar0++;
    }
}

void func_355(int iParam0)
{
    vector3 vVar0;
    int iVar1;
    int iVar2;
    bool bVar3;
    
    if (unk_0x4AE700F97F1781DC(1, iParam0, &vVar0, 3))
    {
        if (func_346(vVar0.y, 1, 1))
        {
            iVar1 = unk_0xD33F4BC17EB987E5(vVar0.y);
            if (unk_0x76B3C79DE564AFC6(iVar1))
            {
                if (unk_0x90219307C9D2728D(iVar1, 0))
                {
                    iVar2 = unk_0xCFA31F1E461A6BB5(iVar1, 0);
                    if (unk_0x095622A3608A0D06(iVar2, vVar0.z) && unk_0x93BDC21B9F2C5E43())
                    {
                        if (func_356(iVar2, &bVar3))
                        {
                            unk_0xB54B438E5C15D5FB(iVar2, vVar0.z);
                        }
                        if (bVar3)
                        {
                            unk_0x28BB69BE14577487(&iVar2);
                        }
                    }
                }
            }
        }
    }
}

int func_356(int iParam0, var uParam1)
{
    if (unk_0x76B3C79DE564AFC6(iParam0))
    {
        if (!unk_0xCC234795142FC2D2(iParam0))
        {
            if (unk_0x8D0F418585E0886B(iParam0))
            {
                if (!unk_0x22237535B3A68DF9(unk_0xE9559A12052415BE(iParam0)))
                {
                    unk_0x1581691D748490F3(iParam0, 0, 1);
                    *uParam1 = 1;
                }
            }
        }
        if (unk_0xC9FBF92709010AC3(iParam0, 0))
        {
            if (unk_0x3B077EBCBD1ABF1F(iParam0))
            {
                return 1;
            }
        }
    }
    return 0;
}

void func_357()
{
    wait(0);
}

void func_358(struct<21> Param0)
{
    func_361(func_362(Param0), Param0);
    func_360(0, -1, 0);
    unk_0x158D750851ECBBF8(&Local_116, 23);
    unk_0xC0AFA7500AD40377(&vLocal_121, 97);
    unk_0x0BDEAF4CD9510F40(0);
    if (!func_359())
    {
        func_344();
    }
    unk_0xCD7E92DE2BFA0B0D(&(Global_2434915.f_3511), 0);
    unk_0xD804ACF2A7171150(&(Global_2434915.f_3511), 1);
}

int func_359()
{
    int iVar0;
    
    iVar0 = 0;
    while (true)
    {
        iVar0++;
        if (!unk_0x27CA09C6DFAB1E79())
        {
            return 0;
        }
        if (unk_0xCA641F91944A37DE())
        {
            return 1;
        }
        if (func_353())
        {
            return 0;
        }
        if (func_351(155))
        {
            return 0;
        }
        if (iVar0 >= 3600)
        {
            return 0;
        }
        wait(0);
    }
    return 0;
}

int func_360(int iParam0, int iParam1, bool bParam2)
{
    int iVar0;
    
    iVar0 = unk_0xF5343104BDF6779F();
    while (iVar0 != 2)
    {
        if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
        {
            if (!bParam2)
            {
                func_345();
            }
            else
            {
                return 0;
            }
        }
        if (!func_338())
        {
            if (iParam0 == 0)
            {
                if (!unk_0x27CA09C6DFAB1E79())
                {
                    if (!bParam2)
                    {
                        func_345();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_353())
                {
                    if (!bParam2)
                    {
                        func_345();
                    }
                    else
                    {
                        return 0;
                    }
                }
                if (func_351(155))
                {
                    if (!bParam2)
                    {
                        func_345();
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else if (!unk_0x8B05DA934032590D())
            {
                if (!bParam2)
                {
                    func_345();
                }
                else
                {
                    return 0;
                }
            }
        }
        wait(0);
        iVar0 = unk_0xF5343104BDF6779F();
    }
    if (iParam1 > -1)
    {
        Global_1312500 = iVar0;
    }
    if (iParam0 == 0)
    {
        if (!unk_0x27CA09C6DFAB1E79())
        {
            if (!bParam2)
            {
                func_345();
            }
            else
            {
                return 0;
            }
        }
    }
    else if (!unk_0x8B05DA934032590D())
    {
        if (!bParam2)
        {
            func_345();
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

void func_361(var uParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
    if (!unk_0x27CA09C6DFAB1E79())
    {
        func_345();
    }
    unk_0x3C5BEC9CD4A5F148(uParam0, 0, Param1.f_16);
}

int func_362(int iParam0)
{
    switch (iParam0)
    {
        case 3:
            return 2;
        
        case 1:
            return 32;
        
        case 32:
            return 32;
        
        case 33:
            return 32;
        
        case 34:
            return 32;
        
        case 35:
            return 32;
        
        case 36:
            return 32;
        
        case 37:
            return 32;
        
        case 38:
            return 32;
        
        case 39:
            return 32;
        
        case 40:
            return 32;
        
        case 41:
            return 32;
        
        case 42:
            return 32;
        
        case 43:
            return 32;
        
        case 44:
            return 32;
        
        case 45:
            return 32;
        
        case 46:
            return 32;
        
        case 47:
            return 32;
        
        case 48:
            return 32;
        
        case 49:
            return 32;
        
        case 50:
            return 4;
        
        case 51:
            return 32;
        
        case 52:
            return 32;
        
        case 53:
            return 32;
        
        case 54:
            return 32;
        
        case 55:
            return 32;
        
        case 56:
            return 32;
        
        case 57:
            return 32;
        
        case 58:
            return 32;
        
        case 59:
            return 32;
        
        case 60:
            return 32;
        
        case 61:
            return 32;
        
        case 62:
            return 32;
        
        case 63:
            return 32;
        
        case 64:
            return 4;
        
        case 65:
            return 32;
        
        case 66:
            return 4;
        
        case 67:
            return 4;
        
        case 68:
            return 32;
        
        case 69:
            return 32;
        
        case 70:
            return 4;
        
        case 71:
            return 32;
        
        case 72:
            return 32;
        
        case 73:
        case 74:
            return 4;
        
        case 75:
            return 32;
        
        case 76:
            return 32;
        
        case 77:
            return 32;
        
        case 78:
            return 32;
        
        case 79:
            return 32;
        
        case 80:
            return 32;
        
        case 81:
            return 32;
        
        case 82:
            return 32;
        
        case 84:
            return 32;
        
        case 83:
            return 32;
        
        case 85:
            return 32;
        
        case 86:
            return 32;
        
        case 87:
            return 32;
        
        case 88:
            return 32;
        
        case 89:
            return 32;
        
        case 90:
            return 8;
        
        case 91:
            return 32;
        
        case 92:
            return 8;
        
        case 93:
            return 8;
        
        case 101:
            return 8;
        
        case 94:
            return 8;
        
        case 95:
            return 32;
        
        case 96:
            return 32;
        
        case 97:
            return 32;
        
        case 98:
            return 8;
        
        case 99:
            return 32;
        
        case 100:
            return 32;
        
        case 102:
            return 32;
        
        case 103:
            return 32;
        
        case 104:
            return 32;
        
        case 105:
            return 8;
        
        case 106:
            return 8;
        
        case 107:
            return 8;
        
        case 108:
            return 8;
        
        case 109:
            return 8;
        
        case 110:
            return 8;
        
        case 111:
            return 8;
        
        case 12:
            return 32;
        
        case 4:
            return 16;
        
        case 13:
            return 32;
        
        case 5:
            return 16;
        
        case 6:
            return 2;
        
        case 8:
            return 2;
        
        case 9:
            return 2;
        
        case 7:
            return 16;
        
        case 10:
            return 2;
        
        case 11:
            return 4;
        
        case 15:
            return 32;
        
        case 16:
            return 32;
        
        case 27:
            return 2;
        
        case 25:
            return 2;
        
        case 26:
            return 2;
        
        case 18:
            return 32;
        
        case 28:
            return 32;
        
        case 29:
            return 2;
        
        case 30:
            return 32;
        
        case 31:
            return 32;
        
        case 17:
            return 2;
        
        case 112:
            return 32;
        
        case 113:
            return 32;
        
        case 19:
            return 32;
        
        case 22:
            return 32;
        
        case 23:
            return 32;
        
        case 24:
            return 32;
        
        case 20:
            return 2;
        
        case 0:
            return 0;
        
        case 21:
            return 32;
        
        case 124:
            return 32;
        
        case 125:
            return 32;
        
        case 114:
            return 32;
        
        case 115:
            return 32;
        
        case 119:
            return 32;
        
        case 117:
            return 32;
        
        case 118:
            return 32;
        
        case 122:
            return 32;
        
        case 123:
            return 32;
        
        case 120:
            return 32;
        
        case 121:
            return 32;
        
        case 126:
            return 32;
        
        case 127:
            return 32;
        
        case 128:
            return 32;
        
        case 129:
            return 32;
        
        case 130:
            return 2;
        
        case 135:
            return 1;
        
        case 131:
            return 2;
        
        case 132:
            return 4;
        
        case 133:
            return 2;
        
        case 134:
            return 2;
        
        case 116:
            return 1;
        
        case 136:
            return 2;
        
        case 137:
        case 138:
        case 139:
        case 140:
        case 141:
        case 142:
            return 0;
        
        case 146:
            return 1;
        
        case 143:
            return 4;
        
        case 144:
            return 16;
        
        case 145:
            return 32;
        
        default:
    }
    return 0;
}

