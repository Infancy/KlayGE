// D3D9RenderFactory.hpp
// KlayGE D3D9渲染引擎抽象工厂 头文件
// Ver 2.0.3
// 版权所有(C) 龚敏敏, 2003-2004
// Homepage: http://klayge.sourceforge.net
//
// 2.0.3
// 改为template实现 (2004.3.4)
//
// 2.0.0
// 初次建立 (2003.8.30)
//
// 修改记录
/////////////////////////////////////////////////////////////////////////////////

#ifndef _D3D9RENDERFACTORY_HPP
#define _D3D9RENDERFACTORY_HPP

#include <KlayGE/PreDeclare.hpp>
#include <KlayGE/RenderFactory.hpp>
#include <KlayGE/RenderBuffer.hpp>

#include <d3d9.h>
#include <d3dx9.h>

#ifdef _DEBUG
	#pragma comment(lib, "KlayGE_RenderEngine_D3D9_d.lib")
#else
	#pragma comment(lib, "KlayGE_RenderEngine_D3D9.lib")
#endif

namespace KlayGE
{
	RenderFactory& D3D9RenderFactoryInstance();
}

#endif			// _D3D9RENDERFACTORY_HPP
