#pragma once


#include "Hazel/Core.h"
#include "Layer.h"

#include <vector>

namespace Hazel {

	typedef std::vector<Layer*> VLayer;
	class HAZEL_API LayerStack
	{
	public:
		LayerStack();
		~LayerStack();

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* overlay);
		void PopLayer(Layer* layer);
		void PopOverlay(Layer* overlay);

		VLayer::iterator begin() { return m_Layers.begin(); }
		VLayer::iterator end() { return m_Layers.end(); }
	private:
		VLayer m_Layers;
		VLayer::iterator m_LayerInsert;

	};
}